/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\porkc                                            */
/*    Created:      Thu Nov 17 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// leftF                motor         1               
// leftB                motor         2               
// rightF               motor         3               
// rightB               motor         4               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void moveForward(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
}

void moveBackward(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
}

void moveRight(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
}

void moveLeft(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
}

void diagonalForwardRight(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
}

void diagonalForwardLeft(int degrees, int speed) {
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
}

void diagonalBackwardRight(int degrees, int speed) {
  leftF.startRotateTo(degrees, deg, speed, rpm);
  rightB.startRotateTo(degrees, deg, speed, rpm);
}

void diagonalBackwardLeft(int degrees, int speed) {
  leftB.startRotateTo(degrees, deg, speed, rpm);
  rightF.startRotateTo(degrees, deg, speed, rpm);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  diagonalBackwardLeft(360, 75);
}
