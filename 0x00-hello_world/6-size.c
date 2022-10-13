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

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a lond int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
