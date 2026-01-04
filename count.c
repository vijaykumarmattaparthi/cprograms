#include <stdio.h>

int main() 
{
    int n, count;
    float num, sum = 0.0, average;
    printf("Enter the number of elements: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for n. Please enter a positive integer.\n");
        return 1; 
    }

    printf("Enter %d numbers:\n", n);
    for (count = 1; count <= n; count++) {
        if (scanf("%f", &num) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            return 1; 
        }
        sum += num;
    }

    average = sum / n;

    printf("Sum of the %d numbers = %.2f\n", n, sum);
    printf("Count of numbers entered = %d\n", n);
    printf("Average of the numbers = %.2f\n", average);

    return 0;
}

