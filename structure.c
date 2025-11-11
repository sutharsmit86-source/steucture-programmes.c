#include<stdio.h>
struct student {
    int rollno;
    char name[20];

};
int main()
{
   struct student s1;
   printf("Enter roll number: ");
    scanf("%d", &s1.rollno);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Student Roll Number: %d\n", s1.rollno);
    printf("Student Name: %s\n", s1.name);
    return 0;
}