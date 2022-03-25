#include <stdio.h>

/**
 *  A program that prints sizes of types.
 *  main: printf functions for each number type.
 *  return: 0, if successful
 */

int main(void)
{
	printf("Size of a char:%d(s)\n", sizeof(char));
	printf("Size of an int: %d(s)\n", sizeof(int));
	printf("Size of a long int: %d(s)\n", sizeof(long));
	printf("Size of a long long int: %d(s)\n", sizeof(long long int));
	printf("Size of a double: %d(s)\n", sizeof(double));
}
