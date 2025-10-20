#include <stdio.h>
int main ()
{
	int roll, a, b, c, total;
	char name[20];
	float average;
	
	printf ("Enter student name: ");
	scanf ("%s", &name);
	printf ("Enter student roll number: ");
	scanf ("%d", &roll);
	printf ("Enter your maths score: ");
	scanf ("%d", &a);
	printf ("Enter your science score: ");
	scanf ("%d", &b);
	printf ("Enter your social score: ");
	scanf ("%d", &c);

	total = a + b + c;
	average = total / 3;

	printf ("student name: %s\n", name );
	printf ("student roll number: %d\n", roll);
	printf ("maths score: %d\n", a);
	printf ("science score: %d\n" , b);
	printf ("social score: %d\n" , c);
	printf ("total marks: %d\n", total);
	printf ("average of total marks: %f\n", average);
	
	if(average >= 75){
	printf("\nyou got A grade!\n");
	}
	
		else 
			if(average < 75 && average >= 50){
			printf("\nyou got B grade.\n");
	}

				else
				if(average < 50 && average >= 35){
				printf("\nyou got C grade.\n");
	}
					else 
					printf("\nyou failed\n");
	return 0;
}

