#include <stdio.h>
#include <stdlib.h>

char *sWap(char *A)
{
    char temp = A[0];
    A[0] = A[2];
    A[2] = temp;

    return A;
}

int main()
{
    char A[4];
    char B[4];
    
    scanf("%s%s", A,B);
    sWap(A);
    sWap(B);
    printf("%s\n", atoi(A) > atoi(B) ? A : B);   
}