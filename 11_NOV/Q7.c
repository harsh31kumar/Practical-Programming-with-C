#include <string.h>
int main(){
char str1[] = "All";
char str2[] = "the";
char str3[] = "Best";
int result1 = strcmp(str1, str2);
int result2 = strcmp(str2, str3);
int result3 = strcmp(str1, str1);
printf("Comparison of str1 and str2: %d\n", result1);
printf("Comparison of str2 and str3: %d\n", result2);
printf("Comparison of str1 and str1: %d\n", result3); 
return 0;
}
