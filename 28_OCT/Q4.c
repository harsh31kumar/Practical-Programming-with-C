#include<stdio.h>
#define a_size 5
void printmyarr_ele(int *ar_ele_ad1 , int ar_ele);

int main(){
	int arr[a_size] , i;
	for(i = 0;i< a_size ;i++)
		arr[i] = i * i;
		printmyarr_ele(&arr[1],arr[2]);
	}
	void printmyarr_ele(int *recv_addr , int  recv_value){
	printf("First paramter is an address %p which has value %d \n" , recv_addr,*recv_addr);
	printf("The second parameter is %d \n " , recv_value);
	}

