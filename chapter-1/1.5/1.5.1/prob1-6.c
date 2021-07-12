#include "stdio.h"
main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		printf("The expression \"getchar() != EOF\" is %d.\n", getchar() != EOF);
	}
}