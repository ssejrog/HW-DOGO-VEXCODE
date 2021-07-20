using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor rf;
extern motor rb;
extern motor lf;
extern motor lb;
extern controller Controller1;
extern motor tilter;
extern motor mogo;
extern motor lift;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );