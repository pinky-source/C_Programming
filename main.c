#include <stdio.h> 
#include <string.h> 
struct Student {
    char name[50];   
    int id;     
    float marks;      
        
};

int main() {
    
    struct Student s1={"Priyanka", 16, 95};
    struct Student s2={"Sana", 18, 97};
    printf("Name=%s ID=%d Marks=%.2f\n", s1.name, s1.id, s1.marks);
    printf("Name=%s ID=%d Marks=%.2f\n", s2.name, s2.id, s2.marks);
    printf("Size of struct student=%d bytes\n",sizeof(struct Student));

    return 0;
}