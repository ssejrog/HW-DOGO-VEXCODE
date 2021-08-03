#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor rf = motor(PORT16, ratio6_1, false);
motor rb = motor(PORT17, ratio6_1, true);
motor lf = motor(PORT18, ratio6_1, false);
motor lb = motor(PORT19, ratio6_1, true);
controller Controller1 = controller(primary);
motor tilter = motor(PORT12, ratio18_1, false);
motor mogo = motor(PORT15, ratio36_1, false);
motor lift = motor(PORT6, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}