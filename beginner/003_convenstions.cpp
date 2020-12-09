#include <iostream>
#include <string>

/*
All global variables should have a comment describing what they are, 
what they are used for, and (if unclear) why it needs to be global
*/
const int kMaximumRobots = 100;

/*
Data members of classes, both static and non-static, are named like ordinary nonmember variables, 
but with a trailing underscore.
*/
class HumonoidRobot
{
private:
    std::string robot_name_;
    static int speed_;
};

/*
Data members of structs, both static and non-static, are named like ordinary nonmember variables. 
They do not have the trailing underscores that data members in classes have.
*/

struct RobotSensor
{
    std::string name;
    int number_of_inputs;
};

/*
Enumerators (for both scoped and unscoped enums) should be named like constants, not like macros. 
That is, use kEnumName not ENUM_NAME.
*/

enum class RobotError
{
    kOk = 0,
    kOutOfMemory,
    kMalformedInput,
};

/*
Regular functions have mixed case; accessors and mutators may be named like variables.
Ordinarily, functions should start with a capital letter and have a capital letter for each new word.
*/

void SenseEnvironment(){
    // logic here
};

int CountOtherRobots()
{
    int count = 0;
    // logic here
    return count;
}

int main()
{
    /*
    The names of variables (including function parameters) and data members are all lowercase, 
    with underscores between words. 
    */

    std::string robotName = "Mesee";  // Bad
    std::string robot_name = "Mesee"; // Good

    /*
    Variables declared constexpr or const, and whose value is fixed for the duration of the program, 
    are named with a leading "k" followed by mixed case. 
    Underscores can be used as separators in the rare cases where capitalization cannot be used for separation.
    */

    const int kRobotHeight = 1.2;
    const int kAndroid8_0_0 = 24;

    return 0;
}

/*
For the full list please visit: https://google.github.io/styleguide/cppguide.html#Variable_Names
*/