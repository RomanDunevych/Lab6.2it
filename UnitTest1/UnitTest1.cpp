#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab6.2/Lab6.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestAverageMinMax)
        {
            const int SIZE = 3;
            int arr[SIZE] = { 1, 2, 3 };

            double avg = averageMinMax(arr, SIZE);

            Assert::AreEqual(2.0, avg);
        }
    };
}

