#include <stdio.h>
int main()
{
	int n,i;

	printf ("Enter the number of students to give marks: ");
	scanf ("%d",&n);

	for (i=1;i<=n;i++)
	{
		printf ("student %d\n",i);
	}
	return 0;
}

