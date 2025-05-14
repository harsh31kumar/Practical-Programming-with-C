#include <stdio.h>

int leapyear(int y){
    return ( y%==0 && (y%100!=0 || y%400==0));
    }
int dayOfyear(int day, int m, int y){
      int dayInmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
      int dayNo =0;
      
if (leapyear(y)){
    dayInmonth[2]=29;
    }
          
for (int i=1; i<month;i++){
     dayNo+=dayInmonth[i];
     }
      
dayNo+=day;
return dayNo;
}
int main(){
int day ,month,y;

      
