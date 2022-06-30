#include <stdio.h>

int selfnbr(int n)
{
    int sum = n;

    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int i, check, arr[10001];
    i = 1;
    while(i < 10001)
    {
        check = selfnbr(i);
        if (check < 10001)
            arr[check] = 1;
        i++;
    }
    i = 1;
    while(i < 10001)
    {
        if (arr[i] != 1)
        {
            printf("%d\n", i);
        }
        i++;
    }
}