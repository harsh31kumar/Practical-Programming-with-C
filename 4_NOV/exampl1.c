#include <stdio.h>
 int main() {
     int count=10;
     int *ptr=&count;
     printf("value available in in variable count=%d\n",count);
     printf("Address available in in variable count=%p\n",&count);
     printf("value is=%p\n",ptr);
     printf("Address is =%p\n",&ptr);
     printf("value is=%d\n",*ptr);
     return (0);
     }
