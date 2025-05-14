#include<stdio.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1;
   
    s1.myString[0] = 'H';
    s1.myString[1] = 'I';
    s1.myString[2] = 't';
    s1.myString[3] = 'M';
    s1.myString[4] = 'A';
    s1.myString[5] = 'N';
    s1.myString[6] = '\0'; 
    
    printf("My letter: %s\n", s1.myString);
    return 0;
}

