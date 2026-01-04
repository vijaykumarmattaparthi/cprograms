#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number integers you want to input: ");
    scanf("%d", &n);
    int arr[n];
    char name[50];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("You entered:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
