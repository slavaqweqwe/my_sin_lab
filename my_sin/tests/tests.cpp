// my_sin.cpp: определяет точку входа для приложения.
//

#include <gtest/gtest.h>
#include "my_sin.h"
#define PI 3.1416

TEST(sinlib_test, for_zero)
{
    double from_lib = testspace::Sin(0);

 
    ASSERT_NEAR(from_lib, 0, 0.0001);
}

TEST(sinlib_test, for_half_pi)
{

    double from_lib = testspace::Sin(PI/2);

    ASSERT_NEAR(from_lib, 1, 0.0001);
}

TEST(sinlib_test, for_3div2_pi)
{
    double from_lib = testspace::Sin(PI*3/2);

    ASSERT_NEAR(from_lib, -1, 0.0001);

}
TEST(sinlib_test, for_pi_div_4)
{
    double from_lib = testspace::Sin(PI/ 4);

    ASSERT_NEAR(from_lib, 0.7071068, 0.0001);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}