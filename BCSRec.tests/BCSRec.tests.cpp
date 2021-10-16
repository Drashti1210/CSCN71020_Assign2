#include "pch.h"
#include "CppUnitTest.h"

extern"C" int getPerimeter(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRectests
{
	TEST_CLASS(BCSRectests)
	{
	public:
		TEST_METHOD(PerimeterTest1)
		{
			int length = 1;
			int width = 1;
			const int EXPECTED = 4;
			int actual;
		
			actual = getPerimeter(&length, &width);
			
			Assert::AreEqual(EXPECTED, actual);
		}

	

	
	};
}
