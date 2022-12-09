#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Rosemary
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an init: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}

