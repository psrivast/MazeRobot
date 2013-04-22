MazeRobot
=========

Arduino Uno Maze Solving Robot Algorithm
 * This is the code for the Arduino Uno Microcontroller
 * Input: the sensor array at the front of the vehicle
 * Outputs signals to the motors to control movement
 * Algorithm: "Left-Hand-on-Wall" Algorithm to solve maze (priorities of checking movements are Left, Straight, Right, Back)
 * Optimization: We use substituion with the list of moves anytime the robot went back in order to optimize the path. For example: Left, Back, Left becomes Straight 
