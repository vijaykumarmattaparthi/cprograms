#include <stdio.h>
int main()
{
	int a , b;
	printf ("Enter value of A:");
	scanf ("%d",&a);
	printf ("Enter value of B:");
	scanf ("%d",&b);
	if (a>b)
	{
		printf ("%d is greater than %d\n", a, b);
	}
	else
	{
		printf ("%d is greater than %d\n", b, a);
	}
	return 0;
}
