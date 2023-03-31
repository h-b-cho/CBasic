#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100*sizeof(char));

    if(pc==NULL)
    {
        printf("동적 메모리 할당에 실패했습니다.\n");
        exit(1);
    }

    for(i=0; i<26; i++) // pc가 가리키는 포인터를 1씩 증가시킴에 따라 순차적으로 알파벳(소문자)를 삽입할 것이다.
    {
        *(pc+i) = 'a'+i;    // *(pc)   == pc[0],
                            // *(pc+1) == pc[1],
                            // *(pc+2) == pc[2] . . .
                // 배열 pc의 첫번째 원소가 "a"인 것과 같다. 그렇다면 여기서 아스키코드에 따라 두번째 원소는 "b"가 된다.
                // 이때, 쌍따옴표와 따옴표가 다른 결과를 야기한다.
    }

    *(pc+i) = 0; // 아스키코드 0 == NULL. c언어에서는 문자열 중 null값을 만나면 그 문자열(배열)의 종료를 뜻하므로 이는 곧 이 함수의 탈출문 역할을 하는 것.

    printf("%s\n", pc);
    free(pc);

    return 0;
};
