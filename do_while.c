#include <stdio.h>

int main() {
    int i = 0;
    
    do {
        i++;
    }
    while(i==1);  //처음에 한번은 무조건 그냥 실행하고 싶다면 do while이 유리하다. 

    printf("%d", i);

    return 0;
}