#include <stdio.h>

int main() {
    int n, m;

    // Main array size
    printf("Enter size of main array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of main array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Subarray size
    printf("Enter size of subarray: ");
    scanf("%d", &m);

    int sub[m];
    printf("Enter %d elements of subarray:\n", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &sub[i]);

    // Search for subarray
    int found = 0;
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (arr[i + j] != sub[j])
                break;
        }

        // If full subarray matched
        if (j == m) {
            found = 1;
            printf("\nSubarray found starting at index %d\n", i);
            printf("Subarray is: ");
            for (int k = 0; k < m; k++)
                printf("%d ", sub[k]);
            printf("\n");
            break;
        }
    }

    if (!found)
        printf("\nSubarray NOT found in the array.\n");

    return 0;
}
