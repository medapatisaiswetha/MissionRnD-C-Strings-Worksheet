/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2)
{
	char **c[5];
	int i = 0, j = 0, k = 0,t=0,count=0;
	for (i = 0; i < 5; i++)
	{
		*c[i] = (char*)malloc(31 * sizeof(char));
	}
	if (str1 == "" || str2 == "" || str1 == NULL || str2 == NULL)
		return '\0';
	else
		for (i = 0; str1[i] != 0; i++)
		{
			for (j = 0; str2[j] != 0; j++)
			{
				if (str1[i] != str2[j])
				{
					while (str2[j]!= ' '||str2[j]!='\0')
					{
						j++;
					}
				}
				else if (str1[i] == str2[j])
				{
					t = i;
					while ((str1[i]!= ' '&&str2[j]!= ' ') || (str1[i]!= '\0'&&str2[j]!= ' ') || (str1[i]!= ' '&&str2[j]!= '\0') || (str1[i]!= '\0'&&str2[j]!= '\0'))
					{
						if (str1[i] == str2[j])
						{
							fflush(stdin);
							*c[k][31] = str1[i];
							i++;
							j++;
						}
						else if (str1[i] != str2[j])
						{
							while (str2[j] == ' ' || str2[j] == '\0')
							{
								j++;
							}
							i = t;
							k = 0;
							break;
						}
						count++;
						c[k] = '\0';
						k++;
					}
				}
				if (str2[j] == '\0')
				{
					while (str1[i] == ' ')
						i++;
				}
			}
		}
	if (count == 0)
		return NULL;
	else
		return *c;
}