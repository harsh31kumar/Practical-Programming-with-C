#include <stdio.h>
void swap(int n1,int n2) {
int temp;
temp=n1;
n1=n2;
n2=temp;
printf("After swapping the value of n1=%d\n",n1);
printf("After swapping the value of n2=%d\n",n2);
}
int main(){
int n1=5;
int n2=4;
printf("Before swapping the value of n1=%d\n",n1);
printf("Before swapping the value of n2=%d\n",n2);
swap(n1,n2);
return (0);
}


