#include <stdio.h>
int main() {
int row=3,col=4;
int x[row][col];
for(int i=0;i<row;i++){
printf("enter data for row %d \n", i);
for(int j=0;j<col;j++)
scanf("%d", &x[i][j]); }
for(int i=0;i<row;i++){
printf("\n");
for(int j=0;j<col;j++)
printf("%d ",*(*(x+i) + j));
}
return 0;
}
