#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 2차원 배열

int main(void)
{
    int i, x, y;
    int** pptr = (int**)malloc(sizeof(int*)*8); // 8개의 포인터변수로 이루어진 pptr.

    for(i=0; i<8; i++)
    {
        *(pptr+i) = (int*)malloc(sizeof(int*)*6); // pptr의 각 원소는, 어떤 6개들이의 배열에 대한 첫번째 원소를 가리킨다.
    }

    for(y=0; y<8; y++)
    {
        for(x=0; x<6; x++)
        {
            *( *(pptr+y) + x ) = 6*y + x;
        }
    }

    for(y=0; y<8; y++)
    {
        for(x=0; x<6; x++)
        {
            printf("%3d", *( *(pptr+y) + x ) );
        }
        printf("\n");
    }

    for(y=0; y<8; y++)
    {
        free(*(pptr+y)); 
        // free(pptr+y); // malloc: *** error for object 0x15be067c8: pointer being freed was not allocated. 네가 free하려는 pointer에는 아무것도 할당된 게 없단 뜻이다.
    }

    return 0;
} 