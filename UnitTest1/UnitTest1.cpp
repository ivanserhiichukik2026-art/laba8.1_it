#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\qq\source\repos\laba8.1_it\laba8.1_it\laba8.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81It
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            char str[] = "I like BASIC and BASIC-80";

            int result = Count(str, 'I');

            Assert::AreEqual(3, result);
        }

        TEST_METHOD(TestChange)
        {
            char str[] = "I like BASIC and BASIC-80";

            char* result = Change(str);

            Assert::AreEqual("I like Delphi and Delphi-80", result);
        }
    };
}
