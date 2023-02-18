#include <stdio.h>

/**
 * main - the main entry point of a program
 * @void: takes not parameter
 *
 * Return: After a successful completition
 *
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n",          sizeof(char));
	printf("Size of a int: %d byte(s)\n",           sizeof(int));
	printf("Size of a long int: %d byte(s)\n",      sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n",         sizeof(float));

return (0);
}
