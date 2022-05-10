# TU Delft Steer-by-Wire bicycle
A GitHub repository for the Bicycle Lab's Steer-by-Wire bicycle.

Building on Georgios Dialynas' work: 
- Original repository: [gdialynas/Steer-by-wire-bicycle](https://github.com/gdialynas/Steer-by-wire-bicycle).
- Paper: [Dialynas, Georgios & Schwab, Arend & Happee, Riender. (2018). Design and implementation of a steer-by-wire bicycle](https://www.researchgate.net/publication/328808185_Design_and_implementation_of_a_steer-by-wire_bicycle).

## File structure
`docs/` - Hosts the documentation for the bicycle, hardware and software.

`inventory/` - Hosts the inventory of the spare parts for the hardware.

`libsurvive-udp/` - Hosts the files to enable HTC Vive Tracker communication through UDP.

`simulink/` - Hosts the MATLAB scripts and Simulink model for the MPC controller.

`teensy/` - Contains the Teensy code that acts as the brain of the bicycle.

`unity/SbW-game/` - Contains the visualisation of the reference line that needs to be tracked. Built in Unity.
