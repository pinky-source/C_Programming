#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insertEnd(struct Node *head, int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    int n, i, sum = 0;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    

    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);

    struct Node *head = NULL;

    for (i = 0; i < n; i++) {
        head = insertEnd(head, arr[n-1-i] - avg);   // difference
    }

    printf("Difference in Linked List:\n");
    printList(head);

    return 0;
}
