#include<stdio.h>
#include<string.h>

struct Studentdetail {
char Name[50];
long int RegNo;
int rollno;
};

int main() {
struct Studentdetail s1 = {"Harsh", "2241011135", 33}; 
struct Studentdetail s2 = {"Satyam", "2241001087", 06};
struct Studentdetail s3 = {"Heamnt", "2241011137", 34};
printf("%s %ld %d\n", s1.Name, s1.RegNo, s1.rollno);
printf("%s %ld %d\n", s2.Name, s2.RegNo, s2.rollno);
printf("%s %ld %d\n", s3.Name, s3.RegNo, s3.rollno);

return 0;

}
