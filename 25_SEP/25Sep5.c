#include <stdio.h>
 int main() {
     char class;
     printf("Enter ship serial no : ");
     scanf("%c" , &class);
     printf("Ship class is %c : ",class);
     switch(class){
            case 'B' :
            case 'b' : 
            printf("Battlesship\n");
            break;
            case 'C' :
            case 'c' : 
            printf("Cruiser\n");
            break;
            case 'D' :
            case 'd' : 
            printf("Destroyer\n");
            break;
            case 'F' :
            case 'f' :
            printf("Frigate\n");
            break;
            default:
            printf("Unknown\n");
            }
   return(0);
  }      



