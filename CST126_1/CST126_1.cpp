// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	//   "I was born with a plastic spoon in my mouth."

	/***goal:**

		create a string function that identifies the location of a character within a string.the find function
		should locate character within a text string, and return the number of first location of the character
		within the text string.

		your program has the following restrictions.

		- the text function should take a pointer to a char for the string.
		- you may not use any string functions or cstring functions.if you need these functions,
		you should write them yourself.
		- you may only use pointers / pointer arithmetic to access your strings
		(hint:  i wrote my own strlen and strcopy functions using pointer arithmetic.)
		- the find function should be case sensative.
		- your find function should return a - 1 if the character isn't found.
		- your find function should handle an empty string.
		- use human indexed format not c++ indexing.so the first character is position 1.
		- you clean your heap up before you exit the program.no memory leaks.*/

	char testString1[]{ "I was born with a plastic spoon in my mouth." };
	char searchChars1[]{ "iIwzr" };
	char testString2[]{ "" };
	char searchChars2[]{ "y" };

	return 0;
}

int stringSearch(char * searchString, char * searchCharacters)
{
	const size_t stringSize = iansStrLen(searchString);
	const size_t searchCharSize = iansStrLen(searchCharacters);

	for (int i = 0; i != searchCharSize; i++)
	{
		for (int s = 0; s != stringSize; s++)
		{
			
		}
	}


}

int iansStrLen(char * string)
{
	int len{};
	while (true)
	{
		if (string == '\0')
		{
			break;
		}
		len++;
		string++;
	}
	return len;
}