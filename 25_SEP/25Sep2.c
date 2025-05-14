#include <stdio.h>
 int main() {
     int maths, physics, chemistry, total_3, total_2;
     printf("Marks obtained in Maths: ");
     scanf("%d" , &maths);
     printf("Marks obtained in Physics : ");
     scanf("%d" , &physics);
     printf("Marks obtained in Chemistry : ");
     scanf("%d" , &chemistry);
     total_3 = maths + physics + chemistry;
     total_2 = maths + physics;
     if(( total_3 >= 180 || total_2 >= 140 ) &&
       ( maths>=65 && physics>=55 && chemistry>=50)) {
            printf("The candidate is eligible for admission");
            }
     else{
            printf("The candidate isn't eligible for admission");
            }    
return 0;
}
