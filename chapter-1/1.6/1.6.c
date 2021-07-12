// counts digits, white space and others
#include "stdio.h"
main()
{
	int c, i, nwhite = 0, nother = 0, ndigit[10];
	for (i = 0; i < 10; i++)
	{
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++ndigit[c - '0'];
		}
		else
		{
			if (c == ' ' || c == '\n' || c == '\t')
			{
				++nwhite;
			}
			else
			{
				++nother;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("occurence of %d is %d\n", i, ndigit[i]);
	}
	printf("whitespaces = %d, others = %d\n", nwhite, nother);
}