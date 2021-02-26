#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 7.3-1(рекурсія).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7312
{
	TEST_CLASS(UnitTest7312)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3][3] = { { -1, 2, 3 },{ 4, 5, 6 },{ 7, 8, -9 } };
			int* pa[3] = { a[0], a[1], a[2] };
			int S = 0;

			S = Sum(pa, 3, 3,0,0);

			Assert::AreEqual(S, 10);
		}
	};
}
