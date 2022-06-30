#include <stdio.h>

void a(int N, int count, int b)
{
    if (N <= 1)
    {
        printf("%d\n", count);
        return ;
    }
    count++;
    a(N - b, count, b + 6);
}

int main()
{
    int N, count = 1, b = 6;;
    scanf("%d", &N);
    a(N,count, b);
}