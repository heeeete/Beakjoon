#include <stdio.h>

int main()
{
    char     arr[101];
    int      i = 0;
    int      count = 0;

    scanf("%s", arr);
    while(arr[i])
    {
        if(arr[i] == 'c' && arr[i + 1] == '=')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 'c' && arr[i + 1] == '-')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=')
        {
            count++;
            i += 3;
        }
        else if (arr[i] == 'd' && arr[i + 1] == '-')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 'l' && arr[i + 1] == 'j')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 'n' && arr[i + 1] == 'j')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 's' && arr[i + 1] == '=')
        {
            count++;
            i += 2;
        }
        else if (arr[i] == 'z' && arr[i + 1] == '=')
        {
            count++;
            i += 2;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            count++;
            i++;
        }
    }
    printf("%d\n", count);
}