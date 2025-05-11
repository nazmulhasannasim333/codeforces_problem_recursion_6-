#include <stdio.h>

void summation(long long int a[], int n, int i, long long int *sum)
{
    if (i == n)
        return;

    *sum += a[i];
    summation(a, n, i + 1, sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int sum = 0;
    summation(a, n, 0, &sum);
    printf("%lld\n", sum);
    return 0;
}