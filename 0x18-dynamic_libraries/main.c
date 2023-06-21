#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len = 0;
	char *s, *str = "hello";
	
	s = malloc(sizeof("hello"));

	len = _strlen("hello");
	printf("length : %d\n", len);
	_puts("hello");
	if (_isdigit('1'))
		printf("is digit\n");
	else
		printf("not a digit\n");


	if (_isalpha('a'))
		printf("is digit\n");
	else
		printf("not a digit\n");

	_strcpy(s, str);

	printf("%s\n", s);
	return 0;
}
