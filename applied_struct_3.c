#include <stdio.h>
#define SIZE 3

struct student
{
    int idcode;
    char name[20];
    double grade;
};

int main(void) 
{
    struct student list[SIZE];
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("Input your id: ");
        scanf("%d", &list[i].idcode);
        getchar();

        printf("Input your name: ");
        scanf("%s", &list[i].name);
        
        printf("Input your grade: ");
        scanf("%lf", &list[i].grade);
    }

    for(i=0; i<SIZE; i++)
    {
        printf("id: %d, name: %s, grade: %.1f.\n", list[i].idcode, list[i].name, list[i].grade);
    }

    return 0;
}