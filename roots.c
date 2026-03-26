#include <stdio.h>
#include <math.h>
void main()
{
	float a , b , c , discriminant , root1 , root2 , real , imag;
	printf ("Enter a , b and c: ");
	scanf ("%f %f %f",&a,&b,&c);
	discriminant = b * b - 4 * a * c;
        if (discriminant > 0)	
        {
		root1 = (-b + sqrt (discriminant))/(2 *a);
	        root2 = (-b-sqrt(discriminant))/(2*a);
	        printf ("The roots are real and distant\n");
	        printf ("root1 = %.2f\n root 2 = %.2f",root1,root2);
        }
	else if (discriminant == 0)
	{
		root1 = -b/(2*a);
		printf ("The roots are real and equal\n");
		printf ("root1 = %.2f\n root 2 = %.2f",root1,root2);
	}
	else
	{
		real = -b/(2*a);
		imag = sqrt (-discriminant)/(2*a);
		printf("The roots are complex\n");
        	printf("root1 = %.2f + %.2fi\n", real, imag);
        	printf("root2 = %.2f - %.2fi\n", real, imag);

	}
}
