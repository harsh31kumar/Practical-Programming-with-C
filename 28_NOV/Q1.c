#include <stdio.h>

struct student {
char name[50];
float physics;
float math;
float chemistry;
};
int main() {
struct student s; 
printf("Enter student's name: ");
fgets(s.name, sizeof(s.name), stdin); 
printf("Enter Physics score: ");
scanf("%f", &s.physics);
printf("Enter Math score: "); 
scanf("%f", &s.math);
printf("Enter Chemistry score: "); 
scanf("%f", &s.chemistry);

printf("\nStudent Details:\n");
printf("Name: %s", s.name); 
printf("Physics: %.2f\n", s.physics);
printf("Math: %.2f\n", s.math);
printf("Chemistry: %.2f\n", s.chemistry);
return 0;
}


