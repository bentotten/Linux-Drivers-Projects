# Linux-Drivers-Projects
Armed with two raspi’s and a fleet of arduinos, this is my repo working 
through the O'Reilly Linux Kernel Drivers book and the O'Reilly Arduino Cookbook.

https://lwn.net/Kernel/LDD3/

https://cdn.instructables.com/ORIG/FFN/1L27/J7MFSITD/FFN1L27J7MFSITD.pdf

Raspis:
- Raspberry Pi 3 Model B
- Raspberry Pi 2 [Deceased]

Arduinos:
- Arduino Nano Sense BLE
- Arduino Nano IoT
- (Several) Arduino Uno

Auxiliary:
- OV7670 CMOS VGA Camera Module
- Arduino shield

## Running Log
Log of my experiences working through this project.

### 10-26-24 - 
Working on building the native kernel now. While this was ongoing, made a makefile and learned about cleaning up failed module initializations, module params, and info fields. Also suprised to see that kernel memory is not swappable. I thought it was interesting this book recommends approaching new/unusal hardware with user space modules before moving it to a full kernel module to speed up early development.

While waiting for the pi to build a native linux kernel, shifting back to the arduino projects. For my first task/challenge, I'm opting to try to print error codes to an LCD screen on a breadboard so I dont have to spend an hour debugging a bad usb cable again next time.

Pi froze, rebuilt with htop up and discovered it was thrashing! Maybe the documentation did not expect me to be running it from the desktop; killed the GUI, shut off periferals, and reran with -j4 instead of -j6. This seems to be out of swap and continuing to build (albiet slowly).

Next time will cross compile this.

References:
- https://www.raspberrypi.com/documentation/computers/linux_kernel.html


### 10-14-24 - More Lessons in Trust and Hardware
Switched to the arduino nano sense today. After seeing three different wiring guides, finally went with the guide outlined in the arduino camera module's file to connect the OV7670. Could not figure out why I was unable to detect the arduino, discovered the usb cable I was using only delivered **power** not **data**. Trust but Verify lesson learned today. Was finally able to stream from the camera to the arduino and display on my computer!

References:
- https://blog.arduino.cc/2020/06/24/machine-vision-with-low-cost-

### 10-13-24 - Lessons in Hardware
Hardware is important. Immediately learned the importance of checking the voltage before applying a power source to a small board (120v vs 5v led to "electronics smell and Ben being down a raspi). Took a bit of time to download and unzip a native kernel. Discovered the joys of the linux kernel vs raspi's linux fork and had to re-download a new kernel specific to the raspi.

References:
- https://www.kernel.org
- https://www.raspberrypi.com/documentation/computers/linux_kernel.html
- https://stackoverflow.com/questions/20167411/how-to-compile-a-kernel-module-for-raspberry-pi

### 10-07-24 - Lessons in Part Numbers
Powered on my new arduino today, discovered I had accidentally gotten the Arduino Nano IoT instead of the Arduino Nano Sense. Learned a lesson in reading part numbers, current Arduino library is not compatible with this version.

References:
- https://blog.arduino.cc/2020/06/24/machine-vision-with-low-cost-camera-modules/

