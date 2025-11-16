#include <stdio.h>
float main ()
{	
	float miles, kilo ;
	printf ("Enter miles:");
	scanf ("%f", &miles);
	kilo = miles / 1.6;
	printf ("miles=%f\nkilometres=%f", miles, kilo);
	return 0;
}
