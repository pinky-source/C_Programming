#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int x) {
    struct node *new = malloc(sizeof(struct node));
    new->data = x;
    new->next = head;
    head = new;
}

void display() {
    struct node *temp = head;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main() {
    insert(10);
    insert(20);
    display();
    return 0;
}
