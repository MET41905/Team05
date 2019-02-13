// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight()
{
  // All the various autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
  /*driveForDistancePID(17, 60); \
  delay(1000);    // for 10 meter = 394" at speed 60 (-127 to 127 speed parameters)
  pivotTurn(0, 60, 85);
  delay(1000);
  //liftMoveAngle(50, 80);          //speed, angle
  driveForDistancePID(42, 60);
  delay(1000);
  driveForDistancePID(20, -60);
  delay(1000);
  pivotTurn(1, 60, 85);
  delay(1000);
  driveForDistancePID(47, 60);
  delay(1000);
  pivotTurn(0, 60, 85);
  delay(1000);
  driveForDistancePID(20, 60);
  delay(1000);
  driveForDistancePID(20, -60);
  delay(1000);
  pivotTurn(1, 60, 85);
  delay(1000);
  driveForDistancePID(47, 60);
  delay(1000);
  pivotTurn(0, 60, 85);
  delay(1000);
  driveForDistancePID(20, 60);
  delay(1000);
  driveForDistancePID(20, -60);
  */
  driveForDistancePID(15, 60);
  delay(1000);
  pivotTurn(0, 60, 85);
  driveForDistancePID(15, 60);
  liftMoveAngle(50, 180);
  delay(1000);
  driveForDistancePID(13, 100);
  liftMoveAngle(50, -20);
  driveForDistancePID(24, 100);

}

void testAutoDrive()
{
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 2000mSec (2Sec)
}
