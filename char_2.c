#include <stdio.h>
#include <string.h>

int main(void)
{
    char inp[5] = "cho";
    printf("input length: %lu\n" , strlen(inp));

    char inp1[5] = "Apple";
    char inp2[5] = "Boy";
    printf("input comparing: %d\n", strcmp(inp1, inp2));

    char inpstr[99] = "i love you!";
    char result[5] = "me2!";
    strcpy(result, inpstr);
    printf("%s", result); // zsh: trace trap  ./a.out on MacOs.....

    return 0;
}