# STM32_INVERTER_CONTROLLER

The repo contains all the firmware codes for the project and instructions on how to load them to the hardware

## Requirements
1) Set up the IDE, for this application you will need to download the Arduino ide [here](https://www.arduino.cc/en/software) if you don't have it already installed for your distributions
2) Now to Instal the board support package for STM32 do this: 
  </br> In your Arduino IDE, go to File > Preferences and Add the URL below to Additional Board Manager URLs text box:
  </br> `https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json`
  ![image](https://user-images.githubusercontent.com/85989401/235103875-2e41a86d-cb5f-4903-ab0d-253967f84271.png)
3)  Go to ` Tools > Board:xx > Board Manager`. In the search bar type stm32 and select install stm32 as in the image below by Espressid Systems.  
![image](https://user-images.githubusercontent.com/85989401/235103960-f15fca89-6561-4292-9b8f-b41c16f634e4.png)
4) Now selectstm32f1 series as shown below
![image](https://user-images.githubusercontent.com/85989401/235104196-9612dc3b-45c2-4916-9e9b-9e143d129efc.png)

 Once done proceed to the next instructions.
## Download the files 
4)  Download all the files on the `Code`:arrow_down_small: on this platform, In your downloads you will get the a folder :file_folder:  `STM32_INVERTER_CONTROLLER`this will have:
 - lIBRARIES FOLDER and
 - STM32_INVERTER_CONTROLLER
  ## Library Installation
5)  On library installation unzip the folder :file_folder: `libraries` in the bat_toy_firmware arduino :file_folder:, copy and paste all the folders to your directory `documents/arduino/library` folder :file_folder:
6)  Open the `STM32_INVERTER_CONTROLLER.ino`  on `STM32_INVERTER_CONTROLLER`folder :file_folder: with the downloaded ide, compile and upload to the hardware `(procedure on how to use the ide is on the tutorial link)`:link:    [https://www.youtube.com/watch?v=saolJ_7E7hc]

# Uploading the codes  :arrow_up:
You can buy the STLINK from here :link: [buy STLINK](https://www.amazon.com/HiLetgo-Emulator-Downloader-Programmer-STM32F103C8T6/dp/B07SQV6VLZ/ref=sr_1_4?keywords=st-link+v2&qid=1682672819&sr=8-4)
or an equivalent supplier.

1) Insert the stlink programmer cable socket onto WSD headers following the named pins out. ...
2) Open Arduino IDE software. ...
3) Next, call out the source code. ...
4) Select “stlink” from the Tools > Programmer menu.//in `version 2.0 of arduino` its in the Tools> Upload method
click compile and upload

You can also explore more from the following tutorial :link:[How to Use stlink Programmer to upload Code](https://youtube.com/clip/UgkxU2qoc2redfZNsjBl_M005fUsd7n_mZhQ)

### Your bard is now programmed

![STM32_INVERTER_CONTROLLER 1](https://user-images.githubusercontent.com/85989401/235107387-a0e3727d-d001-4e72-9282-b5c6c989a6b9.png)

![STM32_INVERTER_CONTROLLER 3](https://user-images.githubusercontent.com/85989401/235107432-cf4086f2-e713-43a7-8f2c-c22704702d2f.png)

# THANK YOU.
