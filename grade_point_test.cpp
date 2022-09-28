#include <iostream>
#include "test.h"
#include "lettergrade.cpp"
using namespace std;

LU_TEST(getPointsA)
{
    LU_ASSERT_EQUAL(4.0, getPoints('A'));
}
LU_TEST(getPointsB)
{
    LU_ASSERT_EQUAL(3.0, getPoints('B'));
}
LU_TEST(getPointsC)
{
    LU_ASSERT_EQUAL(2.0, getPoints('C'));
}
LU_TEST(getPointsD)
{
    LU_ASSERT_EQUAL(1.0, getPoints('D'));
}
LU_TEST(getPointsF)
{
    LU_ASSERT_EQUAL(0.0, getPoints('F'));
}

// LU_TEST(getPointsB)
// {

// }
