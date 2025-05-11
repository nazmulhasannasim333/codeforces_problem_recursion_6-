#include <stdio.h>

void print_digits(long long int n)
{
    if (n < 10)
    {
        printf("%lld", n);
        return;
    }
    print_digits(n / 10);
    printf(" %lld", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        print_digits(n);
        printf("\n");
    }
    return 0;
}