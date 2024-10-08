# motion sensored alarm
made an alarm with a pir motion sensor with a raspberry pi pico w as a part of the <b>bin project at hack club</b>. it detects unauthorized movement and alerts the owner of an intruder.

![image](https://github.com/user-attachments/assets/eaffc595-e546-43b7-8a20-9c3eae5a189e)


i initially started off with a [basic project](https://wokwi.com/projects/406132714095425537) with limited parts (rpi pico w with just an led, motion sensor, breadboard & piezo buzzer) but slowly created two more versions to add on functionalities and make it more complex (rpi pico w, piezo buzzer, relay, motion sensor, led) at the word of the #bin reviewer (i think their name is clay but idk their slack so i can't tag them) who thought there was room for improvement with the first few versions. the final version of the project has been <b>reviewed and approved</b> as of september 2024 and is yet to be shipped.

schematic diagrams of the projects can be found inside each folder's own individual readme and the wiring / connections of components using wires have been specifically pointed out in diagram.json (once again, one for each project in each folder) to avoid any sort of confusion. simulations using wokwi links in each folder should be able to give you an idea of what the projects would look like but in case it doesn't load on the browser based version, you might need to use wokwi for vscode (but i have not had to do that yet).

in the future, i want to continue working on this to build an alarm system that sends you text-message alerts on your phone in case of unauthorized movement detected by the motion sensor but the idea has been put on hold for now as it is way beyond my skill level.
