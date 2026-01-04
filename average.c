#include <stdio.h>
int main()
{
	int a,b,c,avg;
	printf ("Enter value of A: ");
	scanf ("%d",&a);
	printf ("Enter value of B: ");
        scanf ("%d",&b);
	printf ("Enter value of C: ");
        scanf ("%d",&c);
	avg = a/3+b/3+c/3;
	printf ("%d",avg);
	
	return 0;
}
