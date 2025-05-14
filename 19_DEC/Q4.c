#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
// Function to be executed by each thread
void* print_hello(void* arg) {
// This is the work done by each thread
printf("Hello from the thread!\n");
return NULL; // Return value (optional)
}
int main() {
pthread_t thread1, thread2;// Create two threads
if (pthread_create(&thread1, NULL, print_hello, NULL) != 0) {
perror("pthread_create");
exit(1);
}
if (pthread_create(&thread2, NULL, print_hello, NULL) != 0) {
perror("pthread_create");
exit(1);
}
// Wait for the threads to finish
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
printf("Hello from the main thread!\n");
return 0;
}
	 				
