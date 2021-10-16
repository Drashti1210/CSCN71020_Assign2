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
			// testing the getPerimeter function 
			// Perimeter = 2(length+width)
			int length = 1;
			int width = 1;
			const int EXPECTED = 4;  // =2(1+1) = 4
			int actual;
		
			actual = getPerimeter(&length, &width);
			
			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(AreaTest1)
		{
			// testing the getArea function 
			// Area = length*width
			int length = 5;
			int width = 4;
			const int EXPECTED = 20;  // = 5*4 =20
			int actual;

			actual = getArea(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(LengthTest1)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 0;
			int length = 4;

			setLength(input, &length); 

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(LengthTest2)
		{
			// testing the setLength function
		    // input =[1,99]
			int input = 100;
			int length = 4;

			setLength(input, &length);

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(LengthTest3)
		{
			// testing the setLength function
		    // input =[1,99]
			int input = -2;
			int length = 5;

			setLength(input, &length);

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(WidthTest1)
		{
			// testing the setLength function
		    // input =[1,99]
			int input = 1 ;
			int width = 4;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}
		TEST_METHOD(WidthTest2)
		{
			// testing the setLength function
		    // input =[1,99]
			int input = 100;
			int width = -4;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}
		TEST_METHOD(WidthTest3)
		{
			// testing the setLength function
		    // input =[1,99]
			int input = -5;
			int width = 1000;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}



	

	
	};
}
