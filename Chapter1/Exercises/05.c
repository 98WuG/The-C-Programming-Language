#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

#define	LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit */
#define	STEP	20	/* step size */

int main()
{
	int fahr;

	printf( "%4s %6s\n", "Fahr", "Celsius" );

	for ( fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP )
	{
		printf( "%4d %6.1f\n", fahr, ( 5.0 / 9.0 ) * ( fahr - 32 ) );
	}
}
