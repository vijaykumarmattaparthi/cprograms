#include <stdio.h>
int main ()
{
	int a, b, c, d, roll, total;
	char student[10];
	float average = 0.0f;

	printf ("Enter student name: ");
	scanf ("%s", &student);
	printf ("Enter student roll number: ");
	scanf ("%d", &roll);
	printf ("Enter your maths score: ");
	scanf ("%d", &a);
	printf ("Enter your english score: ");
	scanf ("%d", &b);
	printf ("Enter your science score: ");
	scanf ("%d", &c);
	printf ("Enter your social score: ");
	scanf ("%d", &d);

	total = a + b + c + d;
	average = total / 4;
	
	printf ("student name: %s\n", student );
	printf ("student roll number: %d\n", roll);
	printf ("maths score: %d\n", a);
	printf ("english score: %d\n", b);
	printf ("science score: %d\n" , c);
	printf ("social score: %d\n" , d);
	printf ("total marks: %d\n", total);
	printf ("average of total marks: %f\n", average);
	return 0;
}

