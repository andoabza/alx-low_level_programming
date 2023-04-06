#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to int
 * @b: char string
 * Return: converted decimal number or 0 if there is uncovertable char
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int nums, times;
	int len;
	
	if (b == NULL)
	        return (0);
	
	for (len = 0; b[len]; len++)
	{
	        if (b[len] != '\0' && b[len] != '1')
		        return (0);
	}
	
	for (times = 1, nums = 0, len--; len >= 0; len--, times *= 2)
	{
	        if (b[len] == '1')
		        nums += times;
	}
	
	return (nums);
}
  
