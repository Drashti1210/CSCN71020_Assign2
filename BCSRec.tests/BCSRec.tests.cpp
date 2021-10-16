#include "pch.h"
#include "CppUnitTest.h"

extern"C" int getPerimeter(int* length, int* width);
extern"C" int getArea(int* length, int* width);
extern"C" void setLength(int input, int* length);
extern"C" void setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRectests
{
	TEST_CLASS(BCSRectests)
	{
	public:
		TEST_METHOD(PerimeterTest1)
		{
			// testing the 
			int length = 1;
			int width = 1;
			const int EXPECTED = 4;
			int actual;
		
			actual = getPerimeter(&length, &width);
			
			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(AreaTest1)
		{
			int length = 5;
			int width = 4;
			const int EXPECTED = 20;
			int actual;

			actual = getArea(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}


	

	
	};
}
