#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[20] = "World";
    char s3[40];

    strcpy(s3, s1);
    strcat(s3, s2);

    printf("Combined string= %s\n", s3);
 
    printf("length=%lu\n",strlen(s3));


    return 0;
}
