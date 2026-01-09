#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value using pointer = %d\n", *p);

    p = p + 1;   // pointer arithmetic
    printf("Pointer after increment = %p\n", p);

    return 0;
}
