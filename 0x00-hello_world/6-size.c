#include <stdio.h>
/**
*main - print the string in the put function
*
*Description: using the main function
*
*this program prints "
*
*Return: 0
*
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(d));
	printf("Size of an int: %i byte(s)\n", sizeof(a));
	printf("Size of a lond int: %i byte(s)\n", sizeof(b));
	printf("Size of a long long int: %i byte(s)\n", sizeof(c));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
