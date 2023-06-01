Read https://index.ros.org/r/usb_cam 

I installed v4l-utils :
Sudo apt-get install v4l-utils 

v4l2-ctl --list-devices

Sudo apt-get install ros-humble-usb-cam

Then run the correct command written on the website linked here, it should work and display the video from the integrated webcam (ros2 launch usb_cam demo_launch.py)
Use v4l utils to see which video stream is to be used in the config file .yaml :
/video2

To find the config file, find where the apt package was installed : dpkg -L <package_name>



Had to change the config file : 
Change the resolution 
And change the pixel config
![image](https://github.com/LiamKaist/TricycleResearch/assets/117256858/c71efe3e-bbb5-4609-b818-25c1316c2a7e)
