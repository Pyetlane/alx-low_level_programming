#include "main.h"
/**
 * cap_string - capitalize words
 * @s: input
 * Description: capitalise evry word in the sentence
 * Return: capitalized words
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}')
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
