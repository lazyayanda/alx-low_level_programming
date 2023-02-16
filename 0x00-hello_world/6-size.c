#include <stdio.h>
/**
 * main -  program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	int a;
	char c;
	long int b;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
