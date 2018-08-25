#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

#define	LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit */
#define	STEP	20	/* step size */

int main()
{
	int fahr;

	printf( "%8s %6s\n", "Celsius", "Fahr" );

	for ( fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP )
	{
		printf( "%8d %6.1f\n", fahr, ( 9.0 / 5.0 ) * fahr + 32 );
	}
}
