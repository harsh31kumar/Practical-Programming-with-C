#include <stdio.h>
struct student{
 char name[50];
 float physics;
 float maths;
 float chemistry;
};
int main(){
    struct student *s;
    int n=5;
    int i;
    s=(struct student *) malloc(n*sizeof(struct student));
    if(s==NULL){
    printf("Memory allocation failed.\n");
    return 1;
    }
    
    for(i=0;i<n;i++){
       printf("enter details for student %d:\n",i+1);
       printf("Enter students name:");
       getchar();
       fgets((s+i)->name,sizeof((s+i)->name),stdin);
       
       printf("Enter physics score:");
       scanf("%f",&(s+i)->physics);
       
       printf("Enter maths score:");
       scanf("%f",&(s+i)->maths);
       
       printf("Enter chemistry score:");
       scanf("%f",&(s+i)->chemistry);
       printf("\n");
    }
    
    printf("\nStudent details:\n");
     for(i=0;i<n;i++){
       printf("\nStudent %d:\n",i+1);
       printf("Name: %s",(s+i)->name);
       printf("Physics: %.2f\n",(s+i)->physics);
       printf("Maths: %.2f\n",(s+i)->maths);
       printf("Chemistry: %.2f\n",(s+i)->chemistry);
       printf("-----------------------------------------------------------------\n");
       }
    free(s);
    return 0;
    }
    
    
