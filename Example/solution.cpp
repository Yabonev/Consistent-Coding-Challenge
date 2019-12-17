#include <iostream>
#include <cassert>
#include <time.h>

bool isPalindrome(char* word);

void runAllTests();
void isPalindrome_returnsTrue_onEmptyString();
void isPalindrome_returnsTrue_onStringWithLengthOne();
void isPalindrome_returnsTrue_onStringWithSameCharacters();
void isPalindrome_returnsTrue_onPalindrome();
void isPalindrome_returnsFalse_onNoPalindrome();

int main()
{
	runAllTests();
	std::cout << "Tests passed successfully!" << std::endl;

	return 0;
}

bool isPalindrome(char* word)
{
	size_t wordLength = strlen(word);

	if (wordLength < 2)
	{
		return true;
	}

	for (int i = 0; i < wordLength; i++)
	{
		if (word[i] != word[wordLength - 1 - i])
		{
			return false;
		}
	}

	return true;
}

void runAllTests()
{
	isPalindrome_returnsTrue_onEmptyString();
	isPalindrome_returnsTrue_onStringWithLengthOne();
	isPalindrome_returnsTrue_onStringWithSameCharacters();
	isPalindrome_returnsTrue_onPalindrome();
	isPalindrome_returnsFalse_onNoPalindrome();
}

void isPalindrome_returnsTrue_onEmptyString()
{
	// The empty word is a string with length 0.
	char emptyWord[] = "";

	assert(isPalindrome(emptyWord) == true);
}

void isPalindrome_returnsTrue_onStringWithLengthOne()
{
	// Prepare testing data. A random element from the 0-9 range in the ASCI table set as a first and single element of a string.
	srand(time(0));
	char c = rand() % 10;
	char word[] = { c,'\0' };

	// Check if function behaves as expected against the testing data.
	assert(isPalindrome(word) == true);
}

void isPalindrome_returnsTrue_onStringWithSameCharacters()
{
	srand(time(0));
	char c = rand() % 10;
	char word[10];
	int elementCount = rand() % 10;
	for (int i = 0; i < elementCount; i++)
	{
		word[i] = c;
	}
	word[elementCount] = '\0';

	assert(isPalindrome(word) == true);
}
void isPalindrome_returnsTrue_onPalindrome()
{
	char palindrome[] = "racecar";

	assert(isPalindrome(palindrome) == true);
}

void isPalindrome_returnsFalse_onNoPalindrome()
{
	char notPalindrome[] = "randomNotPalindromeWord";

	assert(isPalindrome(notPalindrome) == false);
}