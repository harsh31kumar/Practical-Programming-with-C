#include <stdio.h>
int main(void) {
char dept[String_len], days[String_len];
int course_num, time;
printf("Enter department code, course number, days and ");
printf("time like this:\n> COSC 2060 MWF 1410\n>");
scanf("%s%d%s%d", dept, &course_num, days, &time);
printf("%s id meets is at %d\n", dept, course_num, days, time); 
return (0);
}

