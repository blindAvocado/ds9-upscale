# DS9 LaserDisc Upscale Project
Restoring and upscaling Star Trek: Deep Space Nine from original LaserDisc captures. This follows the DS9:Redefined methodology with custom tweaks for NTSC LaserDisc sources.

## What This Does
Takes raw LaserDisc captures (.tbc files) and processes them through multiple stages to get proper color, deinterlacing, and 4x AI upscaling. The end result is 3040x1920 episodes with BT.709 color and minimal artifacts.

## The Workflow
1. Stack multiple .tbc files into one .tbc (skip if you already have a stacked .tbc file)
2. Chroma decode stacked .tbc file (Stage 2 script)
3. Apply AVS processing (Stage 3 script)
4. Upscale using Topaz
5. Add BCC+ Grain and Supersample in After Effects
6. Convert it to MKV with correct flags (Stage 4 script)
7. Decode and append audio track to MKV (Stage 5 script)
8. Add subtitles

## The Pipeline
Each stage is a drag-and-drop batch script. Process files in order:

### Stage 1: Disc Stacking (optional)
Skip this step if you already have a stacked .tbc file.

**Input:** An odd number of `.tbc` files (raw LaserDisc capture). The more - the better. At least 3, ideally 5.

**Output:** Stacked `.tbc` file

### Stage 2: Chroma Decode
**Input:** Stacked `.tbc` file

**Output:** ProRes `.mov` (30i interlaced)

Runs the custom `ld-chroma-decoder` with DS9-specific settings:

- NTSC 3D comb filter
- Custom adapt-threshold (0.12) and chroma-weight (1.4)
- No noise reduction (handled later in the pipeline)
- Outputs 10-bit YUV422 ProRes for maximum quality

### Stage 3: AviSynth Processing
**Input:** ProRes `.mov` from Stage 2

**Output:** ProRes `.mov` ready for Topaz

This is where the magic happens. The script auto-generates an AviSynth file that:

- Applies different pulldown patterns based on your map files (PD1-PD5)
- Uses RIFE AI conversion where needed
- Falls back to QTGMC deinterlacing for problem frames
- Removes rainbow artifacts (ASTDRmc)
- Fixes ghosting (vsLGhost)
- Converts color from NTSC 1953 (BT.470m) to BT.709

Requires map files in `episodes/S##E##/maps/` directory. See the IVTC section below.

### Stage 4: Final Encode
**Input:** Upscaled `.mov` from Topaz

**Output:** `.mkv` (HEVC/x265)

Encodes to HEVC 10-bit with grain tuning and proper colorspace flags.

### Stage 5: Audio
**Input:** `.pcm` digital audio

**Output:** `.wav` file

Converts raw PCM to 44.1kHz stereo WAV.

## The IVTC Problem
LaserDisc is 30i (interlaced). The show was shot on film at 24fps. Getting back to clean 24fps progressive means figuring out which pulldown pattern each frame needs. There are 5 different 3:2 pulldown phases, plus frames that need full deinterlacing or AI conversion.

This is manual work. Using AvsPmod software with `AvsPmod_DS9-IVTC-test.avs` script to preview different pulldown options side-by-side, you have through the episode frame by frame and build map files that tell the pipeline which frames use which method.

If you are not an insane perfectionist there are TFM/QTGMC plugins (commented out in Stage 3 AVS script) that would make the process automatic but at a cost of clarity and detail. Without going the manual way, though, you wouldn't juice out all the perks LaserDisc provides.

### Testing Scripts
- **AvsPmod_DS9-IVTC-test.avs** - Grid view of all pulldown patterns + QTGMC + RIFE. Change `VIEW_MODE` to switch between grid (0), clean output (1), labeled output (2), etc.
- **AvsPmod_DS9-Derainbow-test.avs** - Compare derainbow settings
- **TFM-Metrics-Analysis.avs** - TFM metrics analysis

Change the `basedir` variable to point to your episode folder.

### Map Files
Map files go in `episodes/S##E##/maps/`:

- `PD2Map.txt` through `PD5Map.txt` - frame ranges for each pulldown pattern
- `RIFEMap.txt` - frames that need AI conversion
- `DIMap.txt` - frames requiring QTGMC deinterlacing

PD1 is the default. Other patterns are applied on top using ReplaceFramesSimple.

Use the Pulldown Visualizer app (in `software/`) to preview the timeline with maps in place.

## Topaz Settings
Manual step between Stage 3 and 4. Default settings:

- 3040x1920 output (4x upscale)
- Proteus v4 model
- Fix compression: 8
- Improve detail: 7
- Sharpen: 4
- Reduce noise: 5
- Dehalo: 4
- Anti-alias/deblur: -17

For perfectionists, use different models per scene type:

- Wide shots: Proteus, Anti-alias -14
- Close-ups/faces: Iris Medium Quality, Reduce noise 25, Anti-alias -31
- Space scenes: Proteus, Improve detail 25, Dehalo 25
- Tricky live action: Artemis Medium Quality v12

See `Topaz_Settings.md` for full details.

## Software You Need

### Included in `software/`
- Custom `ld-chroma-decoder` (from vhs-decode, with --adapt-threshold and --chroma-weight options)
- Custom `ld-analyse` (same custom build)
- Pulldown Visualizer (Electron app for managing map files)

### External Dependencies
- **AviSynth+ 64-bit** - processes the AVS scripts
- **AvsPmod** - real-time AVS preview, essential for mapping frames
- **Topaz Video AI** - the actual upscaling
- **ffmpeg** - encoding/decoding everything
- **LosslessCut** - optional, for trimming at keyframes (shows bogus FPS metadata but the video stream itself is fine)

## Directory Structure
```
episodes/
  S01E01/
    DS9-S01E01_01_raw-ld.mov          # Stage 2 output
    DS9-S01E01_01_raw-ld_process.avs  # Stage 3 auto-generated script
    DS9-S01E01_01_raw-ld_for_topaz.mov # Stage 3 output
    maps/
      PD2Map.txt
      PD3Map.txt
      ...
```

## Notes
- Absolute paths in test AVS scripts need updating per-episode
- All scripts use multithreading (12 threads by default)
- Source is top-field-first (TFF) with 4px crop top/bottom
