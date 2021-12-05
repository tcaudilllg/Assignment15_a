// Author: Anthony Caudill
// 21.FA.CIS.1202.501
// 12/5/2021

// Assignment15_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char character(char start, int offset)
{

	exception invalidCharacterException, invalidRangeException;

	if ((start < 'A') || (start > 'Z' && start < 'a') || (start > 'z'))
	{
		throw invalidCharacterException;
	}

	char letter = start + offset;

	if ((letter < 'A') || (letter > 'Z' && letter < 'a') || (letter > 'z'))
	{
		throw invalidRangeException;
	}
	else
	if ((start >= 'A' && start <= 'Z') && (letter >= 'a'))
	{
		throw invalidRangeException;
	}
	else
	if ((start >= 'a') && (letter < 'a'))
	{
		throw invalidRangeException;
	}


	return letter;
}


int main()
{

	try {

		character(65, 44);
	}
	catch (int e)
	{


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
