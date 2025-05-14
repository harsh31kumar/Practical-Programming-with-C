#include <math.h>
#include <stdio.h>

int hcf(int a,int b) {
    int result = ((a<b)?a:b);
    while (result > 0) {
        if (a%result==0&&b%result==0) {
            break;
        }
        result--;
    }
  return result;
}

int main(){
    int a,b;
    printf ("Please enter an 1st no : :"); 
    scanf ( "%d", &a );
    printf ("Please enter an 2st no : :"); 
    scanf ( "%d", &b );
    printf("HCF of %d and %d is %d ",a,b,hcf(a,b));
    return 0;
}

