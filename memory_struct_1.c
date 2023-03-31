#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
    int number;
    char title[100];
};

void showBook(struct Book *p, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("번호 %d: %s\n", (p+i)->number, (p+i)->title);
    }
};

int main(void)
{
    struct Book *p;
    p = (struct Book *)malloc(2*sizeof(struct Book)); // 총 2개의 Book 구조체를 넣을 수 있는 p.
    if(p==NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    // 구조체의 변수의 속상값, 즉 내부 변수값에 접근하는 법은 p.number 와 같이 온점을 찍어 접근했었다고 한다면,
    // 구조체의 포인터에 접근하기 위해서는 -> 라는 화살표를 사용해서 접근한다.
    p->number = 1;
    strcpy(p->title, "This is Haebin's C.");

    (p+1)->number = 2;
    strcpy((p+1)->title, "Kaist L401");

    showBook(p, 2);
    free(p);
    return 0;
} 