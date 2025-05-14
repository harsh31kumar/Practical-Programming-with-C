#include <stdio.h>
void swap(int *ptr1,int *ptr2) {
int temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("After Swapping The Value Of N1=%d\n",*ptr1);
printf("After Swapping The Value Of N2=%d\n",*ptr2);
}
int main(){
int ptr1=5;
int ptr2=4;
printf("Before Swapping The Value Of N1=%d\n",ptr1);
printf("Before Swapping The Value Of N2=%d\n",ptr2);
swap(&ptr1,&ptr2);
return (0);
}


