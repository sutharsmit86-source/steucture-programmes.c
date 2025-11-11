#include<stdio.h>
struct student_data {
    int rollno;
    char name[50];
    float marks_of_physics,marks_of_chemistry,marks_of_mathematics,total;
};
int main()
{
   struct student_data s1;
   printf("Enter roll number: ");
    scanf("%d", &s1.rollno);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks of physics: ");
    scanf("%f", &s1.marks_of_physics);
    printf("Enter marks of chemistry: ");
    scanf("%f", &s1.marks_of_chemistry);
    printf("Enter marks: ");
    scanf("%f", &s1.marks_of_mathematics);
    printf("Student Roll Number: %d\n", s1.rollno);
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks_of_physics);
    printf("Student Marks: %.2f\n", s1.marks_of_chemistry);
    printf("Student Marks: %.2f\n", s1.marks_of_mathematics);
    s1.total = s1.marks_of_physics+ s1.marks_of_chemistry + s1.marks_of_mathematics;
    printf("Total Marks: %.2f\n", s1.total);
    return 0;
}