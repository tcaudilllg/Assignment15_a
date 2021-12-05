// Author: Anthony Caudill
// 21.FA.CIS.1202.501
// 12/5/2021

// Assignment15_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

//const int INVALID_CHARACTER_EXCEPTION = 1;
//const double INVALID_RANGE_EXCEPTION = 2;

/*  THIS WAS NOT ACCEPTED BY VC++
class except {
public:
	class invalidCharacterException {};
	class invalidRangeException {};
};
*/

char character(char start, int offset)
{

	// exceptions of different types to accomodate multiple catches
	int invalidCharException = 0;
	double invalidRangeException = 0;

	//int invalidCharacterException = 0, invalidRangeException = 0;

	// test if start char not alphabetical

	if ((start < 'A') || (start > 'Z' && start < 'a') || (start > 'z'))
	{
		throw invalidCharException;
	}

	// compute offset char

	char letter = start + offset;

	// test if offset char alphabetical

	if ((letter < 'A') || (letter > 'Z' && letter < 'a') || (letter > 'z'))
	{
		throw invalidRangeException;
	}
	// throw if start and offset char are different case (upper to lower)
	else
	if ((start >= 'A' && start <= 'Z') && (letter >= 'a'))
	{
	     throw invalidRangeException;
	}
	// throw if start and offset char are different case (lower to upper)
	else
	if ((start >= 'a') && (letter < 'a'))
	{
		throw invalidRangeException;
	}


	return letter;
}


int main()
{

	// driver

	try {

		character(65, 44);
	}
	catch (int e)
	{
		cout << "Invalid char reported.";
	}
	catch (double e)
	{
		cout << "Invalid range reported.";
	}


	try {

		character(97, -20);
	}
	catch (int e)
	{
		cout << "Invalid char reported.";
	}
	catch (double e)
	{
		cout << "Invalid range reported.";
	}

	try {

		character(65, -1);
	}
	catch (int e)
	{
		cout << "Invalid char reported.";
	}
	catch (double e)
	{
		cout << "Invalid range reported.";
	}

	try {

		character(45, 231);
	}
	catch (int e)
	{
		cout << "Invalid char reported.";
	}
	catch (double e)
	{
		cout << "Invalid range reported.";
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
