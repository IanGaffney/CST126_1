// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void searchForCharactersInString(const char *, const char *);
int stringSearch(const char **, const char);
size_t iansStrLen(const char *);

int main()
{
	const char testString1[]{ "I was born with a plastic spoon in my mouth." };
	const char searchChars1[]{ "iIwzr" };
	const char testString2[]{ "" };
	const char searchChars2[]{ "y" };

	searchForCharactersInString(testString1, searchChars1);
	searchForCharactersInString(testString2, searchChars2);

	return 0;
}

// loop through a list of provided characters, and search for them in the provided string
void searchForCharactersInString(const char * searchString, const char * searchCharacters)
{
	std::cout << "In String: \"" << searchString << "\"\n" << std::endl;
	const size_t searchCharactersLen{ iansStrLen(searchCharacters) };
	for (int i{ 0 }; i != searchCharactersLen; i++)
	{
		std::cout << "Searching for: " << "\'" << *searchCharacters << "\'" << std::endl;
		const int returnVal{ stringSearch(&searchString, *searchCharacters) };
		if (returnVal >= 0)
		{
			std::cout << "Found at position " << returnVal + 1 << std::endl;
		}
		else {
			std::cout << "Character not found" << std::endl;
		}
		std::cout << std::endl;
		searchCharacters++;
	}
	std::cout << std::endl;
}

// Search through a string for a provided function
int stringSearch(const char ** searchString, const char searchCharacter)
{
	const size_t stringSize{ iansStrLen(*searchString) };
	int position{ 0 };
	for (const char * stringPtr{ *searchString }; *stringPtr != *(stringPtr + stringSize); stringPtr++)
	{
		if (*stringPtr == searchCharacter)
		{
			return position;
		}
		searchString++;
		position++;
	}
	return -1;
}

// determin the length of the string
size_t iansStrLen(const char * string)
{
	int len{ 0 };
	while (*string != '\0')
	{
		len++;
		string++;
	}
	return len;
}