#include <stdio.h>
#include <stdlib.h>


// Linked list

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void print(struct node *h) {
    if (h == NULL) {
        printf("Empty");
        return;
    }
    do {
        printf("\t %d", h->data);
        h = h->next;
    } while (h != NULL);
}

void insert_end(int mydata) {
    struct node *h = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = mydata;
    temp->next = NULL;
    if (h == NULL) {
        head = temp;
        return;
    }
    while (h->next != NULL) { // we are not at the last node
        h = h->next;
    }
    h->next = temp;
}

int main() {
    print(head);
    insert_end(40);
    insert_end(50);
    insert_end(46);
    print(head);
    return 0;
}

