#include <stdio.h>
int main()
{
	int a,b,c,d;
	float ratio;

	printf ("Enter four integer values: ");
	scanf ("%d %d %d %d",&a,&b,&c,&d);

	if(c-d != 0)
	{
		ratio = (float)(a+b)/(float)(c-d);
		printf ("Ratio = %.2f\n",ratio);
	}
	else 
	{
		printf ("Ratio undefined (c - d is zero)\n");
	}
	return 0;
}
