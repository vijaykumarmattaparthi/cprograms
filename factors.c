#include <stdio.h>
int main()
{
	int i,n;
	printf ("Enter a value: ");
	scanf ("%d",&n);
	for (i=1;n>=i;i++)
	{	    
		if (n % i == 0)
		{
		printf ("%d\n",i);
	        }
	}
	return 0;
}
