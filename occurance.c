#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  // space before %c to skip newline

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Character '%c' occurred %d times.\n", ch, count);

    return 0;
}
