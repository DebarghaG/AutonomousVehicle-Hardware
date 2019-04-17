# AutonomousVehicle-Hardware
## CS- 409 Capstone : Benchmarking and Optimizing Hardware for Self Driving Cars.

```
Authors
* @DebarghaG
* @Selah18
```

**The parts of an ADAS System can be broadly divided into :**
1. Sensing
1. Perception
	1. Simultaneous localisation and mapping
	1. Object Detection
	1. Object Tracking
1. Decision Making

**The pipeline for computer vision for an Autonomous Vehicle consists of the following stages.**
1. Sensory data acquisition from the attached sensors. ( Eg: Camera, Radar, LIDAR. ) --> Fusion etc.
2. Sensory data stitching to form a general description of the surroundings.
3. Real time data processing ( Image processing in this context )

This data is then fed into the Core Driving Engine that's an end to end driving piece of code.

**Computer Vision algorithms chosen for the benchmarking of system perfomance :**
1. Sensory data stitching : CPU vs GPU -->  Alpha-Comp : Stitches two images together.
2. Segmentation from the images : Background and foreground --> CPU vs GPU
3. Cascade Classifier for the detection of cars : Detection --> CPU vs GPU
4. Structure of motion identification : CPU vs GPU --> Optical Flow
5. Lane Detection : CPU vs GPU --> Hough Lines Detection for Linear Shapes.
6. Depth Finding : CPU vs GPU --> Stereo Matching for different cameras.

**Deep Learning algorithms that have been chosen for the benchmarking of system performance**
1. End to end Learning : Based off of Nvidia's Autopilot paper.
2. Semantic Segmentation for Roads : Based off of the KittiSeg Paper.
3. ChaffeurNet : An implementation of Waymo's Deep Reinforcement Learning pipeline. 

**Evaluation of performance is being done on the basis of the following factors**
1. Instruction Breakdown.
2. Integer and Floating Point operation intensity
3. Memory Bandwidth Behaviour
4. Memory Footprint Behaviour
5. Cache Behaviour
6. TLB Behaviour
7. Application Latency
8. QoS-RU Curve --> CPU Utilization, Memory Footprints, Memory Bandwidth

