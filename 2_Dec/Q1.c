#include<stdio.h>

struct Student {
    char name[50];
    int marks[5]; 
};

int main() {
    struct Student s;
    int total = 0;
    float avg;
    printf("Enter student name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter marks for 5 sub:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }
    avg = total / 5.0;
    printf("\nStudent Name: %s", s.name);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);
    return 0;
}

