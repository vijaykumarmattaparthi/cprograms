#include <stdio.h>
int main()
{
/*	int a;
	float b;
	char c[30];
	printf ("Enter integer value: ");
	if (scanf ("%d",&a))
		printf ("a = %d\n",a);
	else printf ("Input is wrong");
	printf ("Enter float value: ");
	if (scanf ("%f",&b))
		printf ("b = %f\n",b);
	else printf ("Input is wrong");
	
	printf ("Enter charecter: ");
	if (scanf ("%c",&c))
		printf ("c = %c\n",c);
        else printf ("Input is wrong");
	return 0;
}
*/


	int a;
	float b;
	char c;
	printf ("Enter values of a,b and c\n");
	if (scanf("%d%f%c",&a,&b,&c)==3)
		printf ("a=%d b=%f c=%c\n",a,b,c);
	else 
		printf("Error in input\n");
}


