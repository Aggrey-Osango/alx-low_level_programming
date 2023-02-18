#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - The main program entery
 * @void: takes no argumnets
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char str_n = intoa(n);
	printf(str_n);

return (0);
	}
