#include<stdio.h>
#include<string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    struct myStructure s1;
    strcpy(s1.myString, "HItMAN");
    
    printf("My letter: %s\n", s1.myString);
    return 0;
}

