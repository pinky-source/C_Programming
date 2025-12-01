#include<stdio.h>
#include<string.h>

struct details {
    char name[50];
};

int main() {
    struct details name1 = {"Priyanka"};

  
    printf("Original Name: %s\n", name1.name);

 
    int len = strlen(name1.name);
    printf("Length: %d\n", len);



    char rev = strrev(name1,name);
    printf("Reversed: %s\n",rev);

    return 0;
}
