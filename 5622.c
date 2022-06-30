#include <stdio.h>

int main(){
    char a[16];
    int count = 0;
    int sum = 0;

    scanf("%s", a);
    while(a[count])
    {
        count++;
    }
    for(int i = 0 ; i < count ; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'C')
            sum += 3;
        else if(a[i] >= 'D' && a[i] <= 'F')
            sum += 4;
        else if(a[i] >= 'G' && a[i] <= 'I')
            sum += 5;
        else if(a[i] >= 'J' && a[i] <= 'L')
            sum += 6;
        else if(a[i] >= 'M' && a[i] <= 'O')
            sum += 7;
        else if(a[i] >= 'P' && a[i] <= 'S')
            sum += 8;
        else if(a[i] >= 'T' && a[i] <= 'V')
            sum += 9;
        else if(a[i] >= 'W' && a[i] <= 'Z')
            sum += 10;
        else if(a[i] >= 'O' && a[i] <= 'R')
            sum += 11;
        else
            sum += 2;
    }
    printf("%d\n", sum);
}