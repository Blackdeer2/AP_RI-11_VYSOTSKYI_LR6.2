#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2/PR6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int max_el = 0;
			int index_max = 0;
			int arr[10] = { 35,12,41,35,-11,-8,-3,22,13,-18 };
			Found_Max(arr, 10, max_el, index_max, 0);
			Assert::AreEqual(41, max_el);
		}
	};
}
