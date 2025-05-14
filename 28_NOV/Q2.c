#include <stdio.h>

struct student {
char name[50];
float physics;
float math;
float chemistry;
};

int main() {
struct student s[5]; 
int i;
for(i=0;i<5;i++){
printf("Enter details for student %d:\n", i + 1);
printf("Name");
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

printf("\nStudent Details:\n");
for(i=0;i<5;i++){
printf("Student %d:\n",i+1); 
printf("Name: %s", s[i].name); 
printf("Physics: %.2f\n", s[i].physics);
printf("Math: %.2f\n", s[i].math);
printf("Chemistry: %.2f\n", s[i].chemistry);
printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
}
return 0;
}


