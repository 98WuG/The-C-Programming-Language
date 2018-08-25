#include <stdio.h>

/* count lines in input */
int main()
{
	int c;

	while ( (c = getchar()) != EOF )
	{
		int blank;
		if ( c == ' ' )
		{
			if ( !blank )
			{
				blank = 1;
				putchar(c);
			}
		}
		else
		{
			blank = 0;
			putchar(c);
		}
	}
}
