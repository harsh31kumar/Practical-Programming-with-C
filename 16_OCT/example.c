#include<stdio.h>

void swap(int *n1, int *n2){

        int temp =*n1;
        *n1 = *n2;
        *n2 = temp;
}

int main(){
      int n1,n2;
      
      printf("Enter ur 1st no :");
      scanf("%d", &n1);
      
      printf("Enter ur 2nd no :");
      scanf("%d", &n2);
      
      printf("Before swapping\n");
      printf("No1 :%d\n", n1);
      printf("No2 :%d\n", n2);

      swap(&n1,&n2);
      printf("After swapping\n");
      printf("No1 :%d\n", n1);
      printf("No2 :%d\n", n2);
      
 return 0;

}
