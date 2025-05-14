#include <stdio.h>

int main(void){
float n;
    
    printf("Enter your no:\n");
    scanf("%f",&n);
    int abc =(int)(n*10);

  switch (abc) {
        case 0 ... 49: 
                     printf("Little or no damage");
                     break;
        case 50 ... 54: 
                      printf("Some Damage");
                      break;
        case 55 ... 64: 
                      printf("Serious Damage");
                      break;
        case 65 ... 74: 
                      printf("Disaster");
                      break;
        default: 
                      printf("Higher");
                      break;
        }
   
    return 0;
}


