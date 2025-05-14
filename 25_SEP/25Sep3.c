#include <stdio.h>
 int main() {
     int temp;
     printf("Enter Temperature in ur city : ");
     scanf("%d" , &temp);
     if (temp<0){
           printf("Freezing weather");
           }
     else if(temp <= 0 && temp <= 10) {
           printf("Very Cold weather");
           }
     else if(temp <=11 && temp <=20) {
           printf("Cold weather");
           }
     else if(temp <=21 && temp <=30) {
           printf("Normal temp");
           }
     else if(temp <=31 && temp <=40) {
           printf("It's hot");
           }
     else {
           printf("Its very hot");
           }          
return 0;
}

