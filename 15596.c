#include <stdio.h>

long long sum(int *a, int n)
{
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		sum += *(a++);
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%lld\n", sum(a,n));
}
