#include <stdio.h>
int main(){
char dest[50] = "This is an";
char src[50] = " example";
printf("dest Before: %s\n", dest);
strcat(dest, src);
printf("dest After: %s", dest);
return 0;
}
