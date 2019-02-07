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
  driveForDistancePID(22, 60);     // for 10 meter = 394" at speed 60 (-127 to 127 speed parameters)
  pivotTurn(1, 30, 90);            // turn at speed 30 for 90 degree angle right turn
  driveForDistancePID(40, 60);     // After turn drive 12" at 50 speed
  driveForDistancePID(20, -60);
  pivotTurn(0, 30, 90);
  driveForDistancePID(52, 60);
  pivotTurn(1, 30, 90);
  driveForDistancePID(20, 60);
  driveForDistancePID(20, -60);
  pivotTurn(0, 30, 90);
  driveForDistancePID(52, 60);
  pivotTurn(1, 30, 90);
  driveForDistancePID(20, 60);
  driveForDistancePID(20, -60);

}

void testAutoDrive()
{
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 2000mSec (2Sec)
}
