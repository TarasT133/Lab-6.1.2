#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 3;
			int a[k] = { 1, 2, 3 };
			t = Sum(a, k);
			Assert::AreEqual(t, 6);

		}
	};
}
