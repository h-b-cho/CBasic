#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

struct rect
{
    struct point p1;
    struct point p2;
};

int main(void) 
{
    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 상단의 좌표를 입력: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("오른쪽 하단의 좌표를 입력: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = abs(r.p2.x - r.p1.x);
    h = abs(r.p2.y - r.p1.y);

    area = w*h;
    peri = 2*w + 2*h;

    printf("Your rectangle's area is %d and it's preimeter is %d.\n", area, peri);

    return 0;
}