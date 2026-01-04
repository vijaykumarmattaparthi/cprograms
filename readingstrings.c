#include <stdio.h>
int main()
{
	int no;
	char name1[15],name2[15],name3[15];
	
	printf ("Enter number and name1: ");
	scanf ("%d%15s",&no,name1);
	printf ("%d%15s\n\n",no,name1);

	printf ("Enter number and name2: ");
	scanf ("%d%15s",&no,name2);
	printf ("%d%15s\n\n",no,name2);
	
	printf ("Enter number and name3: ");
	scanf ("%d%15s",&no,name3);
	printf ("%d%15s\n\n",no,name3);
}

