#include "main.h"
/**
 * *leet - Replace specific  character by leet
 * @s: pointer to the string to be used
 *
 * Return: (character)
 */

char *leet(char *s)
{
	int let = 0;
	int leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	while (s[let] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[let])
			{
				s[let] = leetNums[leetCount];
			}
			leetCount++;
		}
		let++;
	}
	return (s);
}
