#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
  
    int n, i, t;
    int a, b;
    int sum = 0;
    
    scanf("%d", &n);
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        sum += a * b;
    }

    if (n == sum) {
        printf("Yes");
    }
    else {
        printf("No");
    }
   

    return 0;
}