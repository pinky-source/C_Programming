
#include <stdio.h>
#include <string.h>

#define MAX 50

struct student {
    int roll;
    char name[30];
};

int main() {
    struct student s[MAX], temp;
    int n, choice, roll;
    char searchName[30];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Read student names
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
    }

    // Sort names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Assign roll numbers
    for (int i = 0; i < n; i++) {
        s[i].roll = i + 1;
    }

    // Menu-driven search
    do {
        printf("\n1. Search by Roll Number");
        printf("\n2. Search by Name");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter roll number: ");
            scanf("%d", &roll);
            if (roll >= 1 && roll <= n) {
                printf("Roll No: %d\nName: %s\n",
                       s[roll - 1].roll, s[roll - 1].name);
            } else {
                printf("Invalid roll number\n");
            }
            break;

        case 2:
            printf("Enter name: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(s[i].name, searchName) == 0) {
                    printf("Roll No: %d\nName: %s\n",
                           s[i].roll, s[i].name);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Student not found\n");
            }
            break;

        case 3:
            printf("Exiting program\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}
