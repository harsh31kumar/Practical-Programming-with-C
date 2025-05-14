#include<stdio.h>
int main(){
int a=8;
float b = 10.24;
char c ='A';
void *ptr;
ptr = &a;
printf("int value using void ptr = %d\n", *(int *)ptr);
ptr = &b;
printf("float value using void ptr = %f\n", *(float *)ptr);
ptr = &c;
printf("char value using void ptr = %c\n", *(char *)ptr);

}
