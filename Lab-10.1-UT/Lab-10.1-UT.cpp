#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.1 - C++/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab101UT
{
	TEST_CLASS(Lab101UT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
			//a,d,g,t,//
			Assert::AreEqual(IsOrNot(), false);

		}
	};
}
