#include <stdio.h>

/*
 * program to convet Fahreheint to celcius
 */

int main()
{
	int fahr, celcius;
	int lower, upper, step;

	lower =0;
	upper =300;
	step  = 20;

	fahr =lower;
	while (fahr <= upper)
	{
		celcius = 5*(fahr-32) / 9;
		printf("%d\t%d\l", fahr celcius);
		fahr = fahr + step;
	}
}
