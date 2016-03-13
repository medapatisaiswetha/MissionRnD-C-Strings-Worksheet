/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void number_to_str(float number, char *str,int afterdecimal)
{
	int i, r,len = 0, n, k, c = 0, l = 0;
	int num = (int)number;
	float flo = number - (float)num;
    n = num;
	int k1=afterdecimal;
	if (num < 0)
	{
		n = 0 - num;
		c=-1;
		l=1;
	}
	if (flo< 0)
	{
		flo = 0 - flo;
	}
	k = n;
	while (k1 != 0)
	{
		flo = flo * 10;
		k1--;
	}
	int flo1 = int(flo);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	n = k;
	if (c < 0)
	{
		str[0] = '-';
	}
	 for (i = 0; i < len; i++)
	{
		r = n % 10;
		n = n / 10;
		str[len - (i + 1+c)] = r + '0';
	}
	if (afterdecimal == 0)
	{
		str[len + l] = '\0';
	}
	else
	{
		str[len + l] = '.';
		for (i = afterdecimal; i >=1 ; i--)
		{
			r = flo1 %10;
			flo1= flo1 /10;
			str[len+l+i] = r + '0';
		}
		str[len + l + afterdecimal+ 1] = '\0';
	}

}