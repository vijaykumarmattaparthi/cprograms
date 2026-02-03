#include <stdio.h>
int main()
{
	int a,b,c,d;
	float ratio;

	printf ("Enter value of a b c d: ");
	scanf ("%d%d%d%d",&a,&b,&c,&d);

	if (c-d != 0)
	{
		ratio = (a+b)/(a-b);
		printf ("ratio = %.2f\n",ratio);
	}
	else 
	{
		printf ("exit(wrong input)");
	}
}
