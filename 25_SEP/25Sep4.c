#include <stdio.h>
 int main() {
     int marks;
     printf("Enter ur Marks : ");
     scanf("%d" , &marks);
     if (marks>90){
           printf("Grade 'O' ");
           }
     else if(marks > 80 && marks <=90) {
           printf("Grade 'A' ");
           }
     else if(marks > 70&& marks <=80) {
           printf("Grade 'B' ");
           }
     else if(marks > 60 && marks <=70) {
           printf("Grade 'C ");
           }
     else if(marks > 50 && marks <=60) {
           printf("Grade 'D' ");
           }
     else {
           printf("Grade 'F' ");
           }          
return 0;
}

