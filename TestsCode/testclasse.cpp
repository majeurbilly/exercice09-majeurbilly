#include "stdafx.h"

#include <iostream>

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsCode
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string p =  "Billy";
			std::string q =  "B i l l y";
		}

	};
}