# AutonomousVehicle-Hardware
## CS- 409 Capstone : Benchmarking and Optimizing Hardware for Self Driving Cars.

```
Authors
* @DebarghaG
* @Selah18
```

The pipeline for computer vision for an Autonomous Vehicle consists of the following stages.
1. Sensory data acquisition from the attached sensors. ( Eg: Camera, Radar, LIDAR. )
2. Sensory data stitching to form a general description of the surroundings.
3. Real time data processing ( Image processing in this context )

This data is then fed into the Core Driving Engine that's an end to end driving piece of code.

Computer Vision algorithms chosen for the benchmarking of perfomance :
1. Sensory data stitching : CPU vs GPU -->  Alpha-Comp : Stitches two images together.
2. Segmentation from the images : Background and foreground --> CPU vs GPU
3. Cascade Classifier for the detection of cars : Detection --> CPU vs GPU
4. Structure of motion identification : CPU vs GPU --> Optical Flow
5. Lane Detection : CPU vs GPU --> Hough Lines Detection for Linear Shapes.
6. Depth Finding : CPU vs GPU --> Stereo Matching for different cameras.
7.
