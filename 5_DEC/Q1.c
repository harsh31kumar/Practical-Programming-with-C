#include <stdio.h>
#include <stdlib.h>

// Linked list

struct node{
int data;
 struct node *next;
};

void print(struct node *h){

if(h==NULL)
{printf("Empty");return;}

do
{printf("\t %d",h->data);
h=h->next;
}while(h!=NULL);

}
int main() {
struct node *head, t1, t2,t3;
t1.data=10; t2.data=20;t3.data=30;
head=&t1; t1.next=&t2;t2.next=&t3;t3.next=NULL;
print(head);
}

