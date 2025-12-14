#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf ("Enter a value: ");
	scanf ("%d",&n);

	for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				printf (" %d\n",i);
				sum = sum + i;		
			}
		}
	printf ("sum of even numbers = %d\n",sum);
	return 0;
}
