#include<stdio.h>

int main(){
int i, sum=0;
printf("Enter ur numbers");
scanf("%d",&i);
printf("The 1st 10 natural no r :\n");
for(i=1;i<=10;i++){
sum += i;
printf("%d\n",i);
}
printf("the sum is :%d",sum);
return 0;
}

