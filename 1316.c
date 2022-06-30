#include <stdio.h>

int main()
{
    char arr[101];
    int N = 0, count = 0, j = 0, k = 0;

    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++)
    {
        int check[26] = {0,};
        scanf("%s", arr);
        while(arr[j] != 0)
        {
            check[arr[j] - 97] = 1;
            while(arr[j] == arr[j+1] && arr[j])
            {
                j++;
            }
            if(arr[j] != arr[j+1] && arr[j])
            {
                j++;
            }
            if(check[arr[j] - 97] == 1 && arr[j] != 0)
            {
                count--;
                break;
            }
        }
        j = 0;
        count++;
    }
    printf("%d\n", count);
}