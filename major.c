#include <stdio.h> // Include the standard input/output library

int main() {
    int age; 

    printf("Enter your age:");
    scanf("%d", &age);
    
    if (age >= 18) {
     	  printf("You are eligible to vote\n");
    }
    
    else{ 
	  printf("Your are not eligible to vote\n");
    }

    return 0;
}
