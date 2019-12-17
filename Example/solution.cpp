#include <iostream>

bool isPalindrome(char* word);

int main()
{
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
