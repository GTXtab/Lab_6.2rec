#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2rec/Lab_6.2rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int arr[size] = { 1, 2, 3, 4, 5 };
			
			Assert::AreEqual(2, avgSum(arr, size), 0.00001);
		}
	};
}
