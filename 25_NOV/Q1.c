#include<stdio.h>

struct myStructure{
int myNum;
char myLetter;
};

int main() {
struct myStructure s1,s2;
s1.myNum = 13; 
s1.myLetter = 'B';
s1.myNum = 45; 
s1.myLetter = 'HItMAN';
printf("My number: %d\n", s1.myNum);
printf("My letter: %c\n", s1.myLetter);
printf("My number: %d\n", s2.myNum);
printf("My letter: %c\n", s2.myLetter);
return 0;
}
