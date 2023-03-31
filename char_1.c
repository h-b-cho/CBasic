#include <stdio.h>

int main(void)
{
    char inp[1001];
    gets(inp);
    int cnt = 0;
    while (inp[cnt]!='\0') // "" not available
    {
        cnt++;
    }
    printf("input length is %d.\n", cnt);
    printf("input is %s.", inp);
    
    return 0;
}