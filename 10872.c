#include <stdio.h>

int a(int N)
{
    int sum = 0;
    if(N == 0 || N == 1)
    {
        return 1;
    }
    else
    {
        sum += N * a(N-1);
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);
    N = a(N);
    printf("%d\n", N);
}