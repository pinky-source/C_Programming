#include <stdio.h>

int main() {
    int a[50], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sorting (Bubble Sort)
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nArray in Ascending Order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nArray in Descending Order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
