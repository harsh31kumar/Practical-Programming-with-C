#include<stdio.h>
#include<math.h>
#include <time.h>
#define a_size 5
#define randmax 100

int main(){
	srand(time(0));
	int arr[a_size],i,sum;
	for(i = 0 ; i < a_size ; i++){
		arr[i] = rand()%randmax;
	
	}	
	for(i = 0 ; i < a_size ; i++){
		printf("arr[%d] has value %d \n",i,arr[i]);
	}
}
