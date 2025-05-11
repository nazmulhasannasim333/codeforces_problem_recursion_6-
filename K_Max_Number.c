#include <stdio.h>

long long findMax(long long arr[], int n, int index)
{
    if (index == n - 1)
    {
        return arr[index];
    }

    long long maxRest = findMax(arr, n, index + 1);

    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

int main()
{
    int N;
    scanf("%d", &N);

    long long arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long max = findMax(arr, N, 0);

    printf("%lld\n", max);

    return 0;
}