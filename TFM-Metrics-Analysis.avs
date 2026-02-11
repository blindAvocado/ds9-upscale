input = LSMASHVideoSource("D:\Projects\DS9.LaserDisc.Upscale\S01E13\DS9-S01E13-stacked.mov").AssumeTFF().Crop(0, 4, 0, -4)

DW = input.DoubleWeave()
PD1 = DW.Pulldown(0, 3)

# Now run TFM analysis on PD1 (already 24fps)
PD1.TFM(output="D:\Projects\DS9.LaserDisc.Upscale\S01E13\analysis_24fps.txt", micout=2, display=true, debug=true)