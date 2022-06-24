#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Pair d;
			d.SetFirst(3);
			d.SetSecond(4);
			Assert::AreEqual(12.0, d.Product());
		}
	};
}