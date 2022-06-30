#include <stdio.h>

int main()
{
    int A, B, C, count = 0, sum = 0;
    scanf("%d%d%d", &A,&B,&C);
    if (B >= C)
    {
        printf("-1\n");
        return 0;
    }
    else
    {
        count = A / (C - B);
    }
    printf("%d\n", count+1);
}