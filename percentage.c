/*#include <stdio.h>
int main()
{
	int a;
	float percentage;

	printf ("Enter your marks");
	scanf ("%d",&a);

	percentage = (a / 100) * 100;

	printf ("%.2f%%\n",percentage);

	return 0;
}
*/

#include <stdio.h>
int main() 
{
float marks[5], total = 0, percentage;
for(int i = 0; i < 5; i++) 
{
printf("Enter marks for subject %d: ", i + 1);
scanf("%f", &marks[i]);
total += marks[i];
}
percentage = (total / 500) * 100;
printf("Percentage: %.2f%%\n", percentage);
return 0;
}
