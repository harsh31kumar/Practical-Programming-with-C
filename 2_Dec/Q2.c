#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n;
    printf("Enter the no of emp: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for emp %d\n", i+1);
        printf("Enter Name: ");
        getchar(); 
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Enter Emp ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEmployee Infooooo:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("Name: %s", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
    }
    return 0;
}


