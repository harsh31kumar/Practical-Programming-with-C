#include<stdio.h>
#define a_size 5
void printmyarr_ele(int arr_ele , int index);

int main(){
	int arr[a_size] , i ,sum;
	printf("Enter %d numbers separated by blanks or <return>s \n>",a_size);
	for(i = 0;i< a_size ;i++)
		scanf("%d",&arr[i]);
		printmyarr_ele(arr[3],3);
	}
	void printmyarr_ele(int val , int index){
	printf("At position %d you entered %d \n",index,val);
	}

