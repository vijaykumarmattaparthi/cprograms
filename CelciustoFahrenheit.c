#include <stdio.h>
int main()
{
	float c,f;
	printf ("Enter °Celcius value : ");
	scanf ("%f",&c);
	f = (25 * 9)/5 + 32;
	printf ("%.f °C in °F is %.f\n",c,f);
	return 0;
}

