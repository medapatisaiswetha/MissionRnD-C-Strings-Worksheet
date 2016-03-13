/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len)
{
	char b[100];
	int i, j = len - 1,slen = 0,k=0;
	for ( i = 0; i < len; i++)
	{
		b[j] = input[i];
		j--;
	}
	b[i] = '\0';
	j = 0;
	for (i = 0;i <= len; i++)
	{
		if (b[i] == ' ' || b[i] =='\0')
		{
			k = i;
			while (slen != 0)
			{
				input[j] = b[i-1];
				j++;
				i--;
				slen--;
			}
			i = k;
			input[i]= ' ';
			j++;
        }
		else
		{
			slen++;
		}
	}
	input[len] = '\0';
}
