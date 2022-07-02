#include <stdio.h>
#include <string.h>

int arr[100001] = { 0, };
int top2 = 0;

int empty()
{
    if (top2 == 0)    
        return 1;                           // 스택이 비어 있으면 return 1
    return 0;                               // 스택에 값이 하나라도 있으면 return 0
}

int size()
{
    return top2;
}

void push(int N)
{
    if (size() == 100001)                     // 스택이 가득 차있으면 값을 안넣고 함수 종료
        return ;
    arr[top2++] = N;                 // 스택에 값을 넣어주고 ++후위연산
}

int pop()
{
    if(empty() == 1)
        return -1;
    return arr[--top2];
}

int top()
{
    if (empty() == 1)
        return -1;                          //비어 있으면 -1 반환
    return arr[top2 - 1];                  //stack의 가장 위에 있는 값을 출력
}

int main()
{
    int N = 0, value = 0;
    char str[10];
    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%s", str);
        if(strcmp(str , "push") == 0)
        {
            scanf("%d", &value);
            push(value);
        }
        else if(strcmp(str , "pop") == 0)
            printf("%d\n", pop());
        else if(strcmp(str , "size") == 0)
            printf("%d\n", size());
        else if(strcmp(str , "empty") == 0)
            printf("%d\n", empty());
        else if(strcmp(str , "top") == 0)
            printf("%d\n", top());
    }
    return 0;
}
