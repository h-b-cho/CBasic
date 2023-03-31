#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi; //pointer integer.
    pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당하라.

    if(pi==NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    *pi = 100;
    printf("%d", *pi);
    free(pi); // 메모리 사용 이후 무조건 해당 메모리를 반환한다. 여기서 pi는 포인터 변수였던 것을 기억해보자. pi == (int *)malloc(sizeof(int)), 즉 아까 할당했던 주소.

              //(int *) <-- 형 변환. 

    return 0;
};
