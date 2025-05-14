#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int id;
};
int main(){
    int n;
    printf("Enter the no of books: ");
    scanf("%d", &n);
    struct Book library[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter detail of Book %d\n", i+1);
        printf("Enter Book Title: ");
        getchar();
        fgets(library[i].title, sizeof(library[i].title), stdin);
        printf("Enter Book Author: ");
        fgets(library[i].author, sizeof(library[i].author), stdin);
        printf("Enter Book ID: ");
        scanf("%d", &library[i].id);
    }
  


}

