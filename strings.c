#include <stdio.h>
int main()
{
	static char a[20] = "NEW DELHI 10301300"; 
//	printf ("NEW DELHI 1214324");
	printf ("%s\n",a);
	printf ("%20s\n",a);
	printf ("%20.10s\n",a);
	printf ("%.5s\n",a);
	printf ("%-20.10s\n",a);
	printf ("%5s\n",a);
	
	printf ("%s\n",a);
	printf ("%5s\n",a);
	printf ("%7.10s\n",a);
	printf ("%10.15s\n",a);
	printf ("%15.18s\n",a);
	printf ("%18s\n",a);
	printf ("%-15.18s\n",a);
	printf ("%-10.15S\n",a);
	printf ("%-7.10s\n",a);
	printf ("%-5s\n",a);
	printf ("%-s\n",a);

	return 0;
}

