#include <stdio.h>
#include <string.h>
int main(){
char str1[] = "Hello World!";
char str2[] = "Write code!";
strncpy(str2, str1, 6);
printf("%s\n", str1);
printf("%s\n", str2);
return 0;
}
