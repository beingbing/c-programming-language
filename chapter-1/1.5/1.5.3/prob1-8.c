#include "stdio.h"
main()
{
	int c, nl = 0, sp = 0, tb = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++nl;
		}
		else
		{
			if (c == '\t')
			{
				++tb;
			}
			else
			{
				if (c == ' ')
				{
					++sp;
				}
			}
		}
	}
	printf("number of blanks are %d, tabs are %d and newlines are %d\n", sp, tb, nl + 1);
}