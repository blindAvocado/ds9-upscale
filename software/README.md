Pulldown Visualizer is a web-based Electron app that I have quickly written (may encounter bugs) to examine filled frame ranges for specific maps.
How to use: Select your default map from the dropdown. Enter total number of frames in an episode. Import map files, which the app would now track for any changes and update the timeline dynamically.

I also use a custom ld-anaylse tool from vhs-encode repository on Github. This one contains two additional options suggested by the author of DS9 Redefined blog: --adapt-threshold and --chroma-weight
Along with ld-analyse you need a custom ld-chroma-decoder tool which also contains these two options.

LosslessCut is also a handful program, which allows to trim/cut video file at a keyframe without re-encoding it. At the moment of writing this file (12-feb-2026) it does however break FPS metadata and shows mind-boggling numbers like 3000 FPS -- the video stream itself is completely fine though. Just thought to mention this to avoid any confusion.

AvsPmod - a must have for real-time preview of AVS script output. This is where you map your episode frames to correct pulldowns to fix interlacing artifcats.

For handling AVS scripts I use AviSynth+ 64 bit.