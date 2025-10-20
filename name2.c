#include <stdio.h>
int main ()
{
	 char name[1];
         int age;
	 float weight,height;
         printf("enter your name:");
         scanf("%s",name);
         printf("enter your age:");
         scanf("%d",&age);
	 printf("enter your weight:");
         scanf("%f",&weight);
	 printf("enter your height:");
         scanf("%f",&height);
         printf("\nHello, %s! You are %d years old.your weight is %f and your height is %f.\n", name, age,weight,height);
         return 0;
}

