#include <stdio.h>

void func(int n, int i)
{
    if (i == n)
        return;
    printf("I love Recursion\n");
    func(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    func(n, 0);
    return 0;
}