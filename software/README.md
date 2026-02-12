# Software Tools

This directory contains custom-built tools and references to external software used in the DS9 upscaling pipeline.

## Included Tools

### Pulldown Visualizer
A web-based Electron app for managing IVTC frame mapping files. May have bugs since it was quickly put together, but it gets the job done.

**How to use:**
1. Select your default pulldown map from the dropdown
2. Enter the total number of frames in the episode
3. Import your map files - the app tracks changes and updates the timeline dynamically

### Custom ld-chroma-decoder & ld-analyse
Modified builds from the vhs-decode repository on GitHub. These versions include two additional options suggested by the DS9 Redefined blog author:
- `--adapt-threshold` - adaptive threshold control for better decoding
- `--chroma-weight` - chroma weighting adjustment

Both tools need these custom builds to work with the Stage 2 processing script.

## External Tools Required

### AviSynth+ 64-bit
The core script processor. All `.avs` files in this project require AviSynth+ to run.

### AvsPmod
Essential for real-time preview of AviSynth script output. This is where you'll spend most of your time mapping episode frames to the correct pulldown patterns to eliminate interlacing artifacts.

### LosslessCut
A very useful program for trimming/cutting video files at keyframes without re-encoding.

**Known issue:** As of writing this document (12-feb-2026), LosslessCut/ffmpeg breaks FPS metadata when cutting files - you might see absurd numbers like 3000 FPS in the file properties. The actual video stream is completely fine, it's just the metadata that's wrong.
