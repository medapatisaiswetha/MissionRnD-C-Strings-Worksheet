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
	char **c=NULL;
	int i = 0, j = 0, k = 0,count=0,row=0,l=0,col=0;
	if (str1 == NULL || str2 == NULL)
	    return NULL;
	c = (char**)malloc(0 * sizeof(char*));
	while (str1[i] != '\0')
	{
		k = i;
		while (str1[i] == str2[j] && str1[i] != ' ')
		{
			i++;
			j++;
		}
		if((str1[i] == '\0'||str1[i] == ' ') && (str2[j] == ' '||str2[j] == '\0')&&(i!=0)&&(j!=0))
		{
						   	count++;
							c = (char**)realloc(c, count*sizeof(char*));
							col = 0;
							c[row] = (char*)malloc(SIZE*sizeof(c));
							l = k;
							while (l < i)
							{
								c[row][col] = str1[l];
								l++;
								col++;
							}
						    c[row][col]= '\0';
							row++;
							i++;
							j = 0;
		}
		else
		{
			while (str2[j] != ' '&& str2[j] != '\0')
				j++;
			if (str2[j] == '\0')
			{
				j = 0;
				while (str1[i] != ' '&& str1[i] != '\0')
					i++;
				if (str1[i] != '\0')
					i++;
			}
			else
				j++;
       }
	}
	if (count == 0)
		return NULL;
	else
		return c;
}