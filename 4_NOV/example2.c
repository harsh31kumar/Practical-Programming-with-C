#include <stdio.h>
 int main() {
     int count=10;
     int *ptr=&count;
     *ptr=20;
     printf("value available in in variable count=%d\n",count);
     *ptr=2+*ptr;
     printf("Address available in in variable count=%d\n",count);
     *ptr= ++(*ptr);
     printf("Address available in in variable count=%d\n",count);
     return (0);
     }
