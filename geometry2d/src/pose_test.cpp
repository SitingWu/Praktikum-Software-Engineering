#include "pose.h"
#include "geo_compare.h"
#include <cassert>
#include <cstdlib>

// LMT_SEL_BEGIN
//distanceTo
static void distance()
{   
    //Pose : double x{0,0} ; double y{0,0};
    Pose one;
    Pose two;
    const bool result = distanceTo(one,two);
    assert(result == true);

}
//isEqual
static void isEqual()
{   
    Pose one;
    Pose two;
    const bool result = isEqual(one,two)
    assert(result ==true);
}
int main(int /*argc*/, char** /*argv*/)
{
    /*Run all test funcitons*/












    return EXIT_SUCCESS;

}