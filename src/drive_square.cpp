#include <iostream>
#include <cmath>

#include <mbot_bridge/robot.h>
#include <wall_follower/common/utils.h>

int main(int argc, const char *argv[])
{
    // Initialize the robot.
    mbot_bridge::MBot robot;
    for (int i=0;i<3;i++)
    {
    robot.drive(0.5, 0, 0);
    sleepFor(2);
    robot.drive(0, 0.5, 0);
    sleepFor(2);
    robot.drive(-0.5, 0, 0);
    sleepFor(2);
    robot.drive(0, -0.5,0 );
    sleepFor(2);
    }
    // Stop the robot.
    std::cout << "Stopping the robot!!" << std::endl;
    robot.stop();
    return 0;
}
