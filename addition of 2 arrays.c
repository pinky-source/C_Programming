#include <stdio.h>

int main() {
    int a1[50], a2[50], a3[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &a2[i]);

    // Copy first array
    for (i = 0; i < n1; i++)
        a3[i] = a1[i];

    // Copy second array
    for (i = 0; i < n2; i++)
        a3[n1 + i] = a2[i];

    // Print result
    printf("Concatenated Array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", a3[i]);

    return 0;
}

