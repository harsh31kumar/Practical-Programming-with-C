#include <math.h>
#include<stdio.h>

int main (){
      int n, var, rem, sum = 0,a = 0 ;
      printf ("Please enter an integer :"); 
      scanf ( "%d", &n );
      var = n;
      while (var != 0) {
             var = var / 10;
             ++a;
             }
      var = n;
      while (var > 0 ) {
             rem = var % 10;
             sum = sum +  pow(rem, a);
             var = var / 10;
             }
      if (sum==n) {
      printf ("%d is an Armstrong number n ",n);
      }
      else {
      printf ("%d is not an Armstrong number n ",n);
      }
  return 0;
}









