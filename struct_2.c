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

    printf("Input your student id.");
    scanf("%d", &s.number);
    printf("Input your name.");
    scanf("%s", s.name); // 스트링은 배열. 배열의 이름은 곧 주소값. 주소연산자 없이 이미 그 자체로 주소값. 
    printf("Input your grade.");
    scanf("%lf", &s.grade);

    printf("student id: %d\n", s.number);
    printf("student name: %s\n", s.name);
    printf("student grade: %.1f\n", s.grade);

    return 0;
}