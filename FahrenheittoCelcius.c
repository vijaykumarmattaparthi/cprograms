#include <stdio.h>
int main ()
{
	float f,c;
	printf("Temperature in Fahrenheit : ");    
	scanf ("%f",&f);
	c = (f - 32) * 0.55;
	printf ("%.f°F in °C is %.f\n",f,c);
	return 0;
}

