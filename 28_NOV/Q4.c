#include <stdio.h>
#include <stdlib.h>

struct student {
char name[50];
float physics;
float math;
float chemistry;
};

int main() {
struct student *s; 
int n = 5; 
int i;
s = (struct student *)malloc(n * sizeof(struct student));
if (s == NULL) {
printf("Memory allocation failed.\n");
return 1;
}
for (i = 0; i < n; i++) {
printf("Enter details for student %d:\n", i + 1);
printf("Name: ");
getchar();
fgets(s[i].name, sizeof(s[i].name), stdin);

printf("Physics score: ");
scanf("%f", &s[i].physics);

printf("Math score: ");
scanf("%f", &s[i].math);

printf("Chemistry score: ");
scanf("%f", &s[i].chemistry);
printf("\n");
}
printf("Student Details:\n");
for (i = 0; i < n; i++) {
printf("\nStudent %d:\n", i + 1);
printf("Name: %s", s[i].name); 
printf("Physics: %.2f\n", s[i].physics);
printf("Math: %.2f\n", s[i].math);
printf("Chemistry: %.2f\n", s[i].chemistry);
}
free(s);
return 0;
}

