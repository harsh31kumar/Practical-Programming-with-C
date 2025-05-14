#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
char *temp1,*temp2;
temp1="Funny"; temp2="world";
pid_t pid;
pid=fork();
if(pid==0){
execlp("echo","echo",temp1,temp2,NULL);
printf("Error");
return 1;
}
else{
}
return 0;
}

