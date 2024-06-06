#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  
    int h, m, c;

    scanf("%d %d", &h, &m);
    scanf("%d", &c);

    int a, b;
    a = (m + c);
    b = a / 60;

    if (a<60) {
        printf("%d %d", h, a);
    }
    else {
        if ((h + b) >= 24) {
            h = h + b - 24;
            printf("%d %d", h, a % 60);
        }

        else {
            printf("%d %d", h+b, a%60);
        }
    }

    

    return 0;
}