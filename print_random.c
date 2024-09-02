#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

void main()
{
	//seed the randomizer
	srand((unsigned)time(NULL));

	printf("Today's random word: ");

	for (int a = 0; a < 7; ++a)
	{
		putchar(randchar());
	}

	putchar('\n');
}