#include <stdio.h>
#include <string.h> 
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int arraySize;
    printf("Enter the number of students: ");
    scanf("%d", &arraySize);
    struct Student students[arraySize]; 

    printf("\nEnter details for %d students:\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf("%s", students[i].name); 
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < arraySize; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}