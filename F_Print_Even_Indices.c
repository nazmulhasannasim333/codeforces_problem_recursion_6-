#include <stdio.h>

void print_even_indices(int arr[], int index, int isFirst)
{
    if (index < 0)
        return;

    if (index % 2 == 0)
    {
        if (!isFirst)
            printf(" ");
        printf("%d", arr[index]);

        isFirst = 0;
    }

    print_even_indices(arr, index - 1, isFirst);
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_even_indices(arr, N - 1, 1);

    return 0;
}