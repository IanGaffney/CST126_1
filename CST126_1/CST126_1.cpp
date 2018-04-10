// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void searchForCharactersInString(const char *, const char *);
int stringSearch(const char *, const char);
int iansStrLen(const char *);

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

	const char testString1[]{ "I was born with a plastic spoon in my mouth." };
	const char searchChars1[]{ "iIwzr" };
	const char testString2[]{ "" };
	const char searchChars2[]{ "y" };

	searchForCharactersInString(testString1, searchChars1);
	searchForCharactersInString(testString2, searchChars2);

	return 0;
}

void searchForCharactersInString(const char * searchString, const char * searchCharacters)
{
	std::cout << "In String: \"" << searchString << "\"" << std::endl;
	const size_t searchCharactersLen = iansStrLen(searchCharacters);
	for (int i{}; i != searchCharactersLen; i++)
	{
		const char searchChar = *searchCharacters;
		std::cout << "Searching for: " << "\'" << searchChar << "\'" << std::endl;
		int returnVal = stringSearch(searchString, searchChar);
		if (returnVal >= 0)
		{
			std::cout << "Found at position " << returnVal + 1 << std::endl;
		}
		else {
			std::cout << "Character not found" << std::endl;
		}
		searchCharacters++;
	}
	std::cout << std::endl;
}

int stringSearch(const char * searchString, const char searchCharacter)
{
	const size_t stringSize = iansStrLen(searchString);
	for (int s{}; s != stringSize; s++)
	{
		if (*searchString == searchCharacter)
		{
			return s;
		}
		searchString++;
	}
	return -1;
}

int iansStrLen(const char * string)
{
	int len{};
	while (true)
	{
		if (*string == '\0')
		{
			break;
		}
		len++;
		string++;
	}
	return len;
}