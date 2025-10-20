#include <stdio.h>
int main()
{
	int a;

	printf ("Enter a number from 1 to 7:");
	scanf ("%d",&a);
	
	if(a == 1){
		printf("\nsunday\n");
	}
	else
		if(a == 2){
		printf("\nmonday\n");
	}
	else
		if(a == 3){
		printf("\ntuesday\n");
	}
	else
		if(a == 4){
                printf("\nwednesday\n");
	}
	else
		if(a == 5){
                printf("\nthursday\n");
	}
	else
		if(a == 6){
                printf("\nfriday\n");
	}
	else	
		if(a == 7){
                printf("\nsaturday\n");
	}	
	return 0;
}


