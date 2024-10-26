# Linux-Drivers-Projects
Armed with two raspi’s and a fleet of arduinos, this is my repo working 
through the Kernel Drivers handbook

https://lwn.net/Kernel/LDD3/

## Running Log

### 10-07-24 - Lessons in Part Numbers
Powered on my new arduino today, discovered I had accidentally gotten the Arduino Nano IoT instead of the Arduino Nano Sense. Learned a lesson in reading part numbers, current Arduino library is not compatible with this version.

References:
- https://blog.arduino.cc/2020/06/24/machine-vision-with-low-cost-camera-modules/

### 10-13-24 - Lessons in Hardware
Hardware is important. Took a suprising amount of time to track down a mouse, keyboard, ethernet cable, and monitor. Then immediately learned the importance of checking the voltage before applying a power source to a small board (120v vs 5v led to "electronics smell and Ben being down a raspi). Took a bit of time to download and install a native kernel. Discovered the joys of the linux kernel vs raspi's linux fork and had to re-download a new kernel specific to the raspi.

References:
- https://www.kernel.org
- https://www.raspberrypi.com/documentation/computers/linux_kernel.html
- https://stackoverflow.com/questions/20167411/how-to-compile-a-kernel-module-for-raspberry-pi

### 10-14-24 - More Lessons in Trust and Hardware
Switched to the arduino nano sense today. After seeing three different wiring guides, finally went with the guide outlined in the arduino camera module's file to connect the OV7670. Could not figure out why I was unable to detect the arduino, discovered the usb cable I was using only delivered **power** not **data**. Trust but Verify lesson learned today. Was finally able to stream from the camera to the arduino and display on my computer!

### 10-26-24 - 
Working on building the native kernel now

