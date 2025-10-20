#include <stdio.h>
int main ()
{
	int a , b , c , d , e , sum;
	printf ("Enter value of a:");
	scanf ("%d",&a);
	printf ("Enter value of b:");
	scanf ("%d",&b);
	printf ("Enter value of c:");
	scanf ("%d",&c);
	printf ("Enter value of d:");
	scanf ("%d",&d);
	printf ("Enter value of e:");
	scanf ("%d",&e);
	sum = a + b + c + d + e;
	printf ("sum of enterd values: %d\n",sum);
	return 0;
}
