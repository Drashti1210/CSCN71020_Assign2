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
		TEST_METHOD(getPerimeter_1and1_4)
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

		TEST_METHOD(getArea_5and4_20)
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

		TEST_METHOD(setLength1_1_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 1;
			int length;

			setLength(input, &length);

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(setLength2_99_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 99;
			int length;

			setLength(input, &length);

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(setLength3_2_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 2;
			int length;

			setLength(input, &length);

			Assert::AreEqual(input, length);
		}
		TEST_METHOD(setWidth1_1_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 1;
			int width;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}
		TEST_METHOD(setWidth2_99_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 99;
			int width;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}
		TEST_METHOD(setWidth3_20_pass)
		{
			// testing the setLength function
			// input =[1,99]
			int input = 20;
			int width;

			setWidth(input, &width);

			Assert::AreEqual(input, width);
		}

	};
}
