#include <stdio.h>
#include <string.h> // Required for strcpy

int main() {
    char name[50]; // To store the student's name
    int studentNo; // To store the student's roll number
    int marks1, marks2, marks3; // To store marks in three subjects
    int totalMarks;
    float percentage;

    // Accept student's name
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    // Remove the trailing newline character from fgets input
    name[strcspn(name, "\n")] = 0; 

    // Accept student number
    printf("Enter student number: ");
    scanf("%d", &studentNo);

    // Accept marks in three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &marks3);

    totalMarks = marks1 + marks2 + marks3;
    percentage = (float)totalMarks / 3.0;

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Student Number: %d\n", studentNo);
    printf("Marks in Subject 1: %d\n", marks1);
    printf("Marks in Subject 2: %d\n", marks2);
    printf("Marks in Subject 3: %d\n", marks3);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
