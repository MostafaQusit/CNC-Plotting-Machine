# CNC-Plotting-Machine
### 3-Axis Parallel CNC Plotting Machine - closed loop version

- A CNC M/C capable of drawing 2D pictures and writing using a pen (3 DOF).
- Was implemented using 2 different control algorithms: open loop using 2 stepper motors and closed loop using 2 PID-controlled DC motors and 2 encoders for the feedback and servo for Vertical motion(Pen up and down).
- This coding project cover the closed loop case by programming the following tasks:
  - controlling the the 2 DC motors and the servo motor.
  - collecting Encoder feedback reading for error control.
  - applying inverse kinematics to convert the desired point of end-effetor to the actuators moition.
  - create the required draw patterns for writing (line, arc, ..).
  - study the whole alpabetic letters (capital, small), numbers and some speial symbols and store their shapes as connected paths.
  - connecting the project to Bluetooth to communicate with mobile app to give the required words to write.
  - adding some state-indecation light system to identify the user about the current process.
