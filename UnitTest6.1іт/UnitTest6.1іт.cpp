#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61іт
{
	TEST_CLASS(UnitTest61іт)
	{
	public:
		
		TEST_METHOD(TestCountAndSum)
        {
            int p[] = { 20, 30, 40, 50, 60 };

            Assert::AreEqual(4, CountElements(p, 5));
            Assert::AreEqual(180, SumElements(p, 5));
        }

        TEST_METHOD(TestZeroElements)
        {
            int p[] = { 20, 30, 40, 50, 60 };

            ZeroElements(p, 5);

            Assert::AreEqual(20, p[0]);
            Assert::AreEqual(0, p[1]);
            Assert::AreEqual(0, p[2]);
            Assert::AreEqual(0, p[3]);
            Assert::AreEqual(0, p[4]);
        }
	};
}
