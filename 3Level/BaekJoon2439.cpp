#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
  
    int t, i, j;

    scanf("%d", &t);
    

    for (i = 1; i <= t; i++) {
        for (j = 1; j <= t - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}