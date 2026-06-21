# minecraft-piston-irl
minecraft inspired piston for hackclub fallout. i saw the jukebox project that someone made for hackclub so i thought i could do something similar by making the piston, the most important part of minecraft redstone, in real life by using some rubber bands, a clever design and some electronics to make it to fruition. you can program the arduino to make the piston either push forwards or pull backwards.
<img width="645" height="454" alt="Screenshot 2026-06-11 125118" src="https://github.com/user-attachments/assets/70bf6bd2-4c0a-4d30-865a-f83a1b78e868" />

# premise
the rubber band will be always under tension and pulling the piston out for more explosivity and the stepper motor will be the one to pull it back with a string attached using its high torque capabilities 
<img width="1468" height="472" alt="Screenshot 2026-06-04 210245" src="https://github.com/user-attachments/assets/2f16b87f-b41d-4e4e-9d6a-f5b7e983fbed" />
<img width="1357" height="609" alt="Screenshot 2026-06-04 210301" src="https://github.com/user-attachments/assets/139aedc6-bf3e-49f9-b1a9-1b10cb43d603" />
<img width="469" height="356" alt="Screenshot 2026-06-04 112514" src="https://github.com/user-attachments/assets/ffeef99a-2a80-4966-994f-14878ab01130" />

# 3d model
<img width="901" height="715" alt="Screenshot 2026-06-11 165537" src="https://github.com/user-attachments/assets/923600a2-c9c8-464a-a61e-01741a1f206b" />
<img width="1144" height="537" alt="Screenshot 2026-06-11 165555" src="https://github.com/user-attachments/assets/d69bcc25-6ea8-440d-92ea-79584fbe93a7" />
<img width="1919" height="1016" alt="Screenshot 2026-06-04 210759" src="https://github.com/user-attachments/assets/e78777db-5c92-4bde-8bf2-08aa47a65b21" />
<img width="1173" height="618" alt="Screenshot 2026-06-05 203242" src="https://github.com/user-attachments/assets/5e3aba58-849b-4d73-8a19-c631a8d200ec" />

# schematics
<img width="1374" height="701" alt="Screenshot 2026-06-11 121313" src="https://github.com/user-attachments/assets/236552be-7fb3-45fe-a61d-7b17c71f46c1" />
the arduino will be connected to the power supply and the motor driver to control the motor

# firmware

i included a simple arduino script that tells the stepper motor forrwards or backwards to push and pull the piston<img width="685" height="414" alt="Screenshot 2026-06-05 203426" src="https://github.com/user-attachments/assets/eec0887b-556a-4863-9db1-aeb640b39ab9" />
# zine

<img width="3508" height="4960" alt="mine zine2 0" src="https://github.com/user-attachments/assets/a70dff08-e008-403f-a2b7-419ba0463728" />


# BOM

-arduino nano x1
-L289N motor driver x1
-stepper motor 28BYJ-48 x1
-spool x1
-string x1
-AA battery holder x1
-Jumper wires
-rubber bands x4
-screws x16

# How to build:

For screws and similar items, it is recommended to find the cheapest in your location. 3d print the case files in the cad folder, flash your arduino nano with the firmware file in the corresponding folder then screw the parts in place on the the lid after making sure they fit.then solder or plug the cables into the components. for the rubber band,pass it through the corner handles and the handle on the piston leg then tie a knot on both sides, then tie the string on the spool and tie the other side to the handle on the piston leg, then screw the lid shut. 



