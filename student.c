#include <stdio.h>

int main ()
{
         char name[50];
         int studentnumber , age , a , b , c , d , e ;

	 printf("enter your name:");
         scanf("%s",name);
	 printf("enter your studentnumber:");
	 scanf("%d",&studentnumber);
         printf("enter your age:");
         scanf("%d",&age);
	 printf("enter your math score:");
	 scanf("%d",&a);
	 printf("enter your science score:");
	 scanf("%d",&b);
	 printf("enter your social score:");
	 scanf("%d",&c);
	 printf("enter your english score:");
	 scanf("%d",&d);
	 printf("enter your telugu score:");
         scanf("%d",&e);
	 

	 printf("\nHello, %s(%d)! You are %d years old.\nyou scored %d in math, %d in science, %d in social, %d in english, %d in telugu.\n ", name , studentnumber , age , a , b , c , d , e); 
         
	 return 0;
}

