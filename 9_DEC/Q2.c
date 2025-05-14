#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void) {
fork();
fork();
fork();
printf("I am process %ld and my parent is %ld\n",getpid(), getppid());
return 0;
}
