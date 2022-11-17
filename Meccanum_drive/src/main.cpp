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

void moveForward() {
  leftF.spinFor(forward, 1, turns, false);
  leftB.spinFor(forward, 1, turns, false);
  rightF.spinFor(forward, 1, turns, false);
  rightB.spinFor(forward, 1, turns, false);
}

void moveBackward() {
  leftF.spinFor(reverse, 1, turns, false);
  leftB.spinFor(reverse, 1, turns, false);
  rightF.spinFor(reverse, 1, turns, false);
  rightB.spinFor(reverse, 1, turns, false);
}

void moveRight() {
  leftF.spinFor(forward, 1, turns, false);
  rightB.spinFor(forward, 1, turns, false);
  leftB.spinFor(reverse, 1, turns, false);
  rightF.spinFor(reverse, 1, turns, false);
}

void moveLeft() {
  leftF.spinFor(reverse, 1, turns, false);
  rightB.spinFor(reverse, 1, turns, false);
  leftB.spinFor(forward, 1, turns, false);
  rightF.spinFor(forward, 1, turns, false);
}

void diagonalForwardRight() {
  leftF.spinFor(forward, 1, turns, false);
  rightB.spinFor(forward, 1, turns, false);
}

void diagonalForwardLeft() {
  leftB.spinFor(forward, 1, turns, false);
  rightF.spinFor(forward, 1, turns, false);
}

void diagonalBackwardRight() {
  leftF.spinFor(reverse, 1, turns, false);
  rightB.spinFor(reverse, 1, turns, false);
}

void diagonalBackwardLeft() {
  leftB.spinFor(reverse, 1, turns, false);
  rightF.spinFor(reverse, 1, turns, false);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}
