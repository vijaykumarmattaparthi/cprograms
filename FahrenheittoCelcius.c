#include <stdio.h>
int main ()
{
        float f,c;
        printf("Temperature in Fahrenheit : ");
        scanf ("%f",&f);
        c = (f - 32) * 0.55;
        printf ("%.1f°F in °C is %.2f\n",f,c);
        return 0;
}

