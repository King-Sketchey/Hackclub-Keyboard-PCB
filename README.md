# Sketchey's gaming hackpad
A hackpad for Hack Club's Blueprint.
It features a 5 x 3 matrix with the basic keys used in most moden games

# Complete hackpad
<img width="1066" height="805" alt="Screenshot 2026-03-07 170044" src="https://github.com/user-attachments/assets/ae794086-d0ed-42f7-9fac-8aad73baaf0b" />

# WHY?
I am left handed and use my mouse with my left hand , so when I play games on PC, it is quite uncomfortable, as my hands are very close together. With this, I can put it to the right of the main keyboard and have my hands spaced out more evenly, with the display centered.

# Screenshots
Schematic            |  PCB         |   Case
:-------------------------:|:-------------------------:|:-------------------------:|
<img width="1335" height="909" alt="image" src="https://github.com/user-attachments/assets/ad9225b1-3e2a-4cc0-b4f7-d1d538a51d18" />  |  <img width="1236" height="739" alt="image" src="https://github.com/user-attachments/assets/bade97f3-2ea0-4a83-900e-e872fd2c5ac8" />  |  <img width="933" height="674" alt="image" src="https://github.com/user-attachments/assets/bb69a159-b3d6-4e9b-8de2-f84172c92259" /><img width="1290" height="672" alt="image" src="https://github.com/user-attachments/assets/2a9a82d0-c1f6-47aa-a7aa-b7cf1c1a6565" />


# Key layout
<img width="518" height="327" alt="Screenshot 2026-03-02 195940" src="https://github.com/user-attachments/assets/e862835d-b9a3-4c08-8bb5-e9bf781b8b27" />


# Challanges
I _really_ wanted this to be compact so that it didn't take up too much space. This meant the PCB had to be off centered form the keys to make room for the Seeeduino XIAO. It was also difficult arranging pasts to that the Seeeduino would fit. This made circuitry a bit messy, but it wasnt too bad. I also had to decide how the case should correct the off centered PCB. So I spent 6 hours making various prototypes. I also added variables that would change the cases thickness and the hole spacing from the outside. Basically, I had to decide if I should create the case using the short or long end of the PCB as the referance.

<img width="1192" height="727" alt="image" src="https://github.com/user-attachments/assets/1463c96a-def1-427f-84a6-589bb7d541c3" />
<img width="1060" height="713" alt="image" src="https://github.com/user-attachments/assets/765a5044-959d-42ae-8fde-4bd9dca3f53f" />

<img width="1209" height="670" alt="image" src="https://github.com/user-attachments/assets/eed9aad0-2478-4504-9ba0-0d8e916fa179" />
<img width="1168" height="739" alt="image" src="https://github.com/user-attachments/assets/ac201451-ead9-4fad-a5c5-596ef016ed50" />
 The reason I was concerned with the case is because if I made the walls too small, the structual integrity could be poor. However, as I mentioned before, I really wanted this to be compact.

 I eventually landed on this:
 <img width="1069" height="743" alt="image" src="https://github.com/user-attachments/assets/fae81c46-8759-4c35-909f-b31fe85df0b2" />

 When importing the PCB layout into onshape, the files corrupted so I had to just use a green rectangle.
 The switches and keycaps loading in took a very long time as well.
 Doing _anything_ after they were put in took ages.
<img width="1911" height="989" alt="Screenshot 2026-03-06 211906" src="https://github.com/user-attachments/assets/a455dba4-3b65-4474-aeba-627e6758d1ec" />
 This was also my first time using KiCad and doing anything in C, so that was a bit difficult.


