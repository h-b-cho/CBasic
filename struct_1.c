#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[50];
    double grade;
};

int main(void)
{
    struct student s;
    s.number = 20131621;
    strcpy(s.name, "Haebin Cho");
    s.grade = 4.5;

    printf("student id: %d\n", s.number);
    printf("student name: %s\n", s.name);
    printf("student grade: %.1f\n", s.grade);

    return 0;
}