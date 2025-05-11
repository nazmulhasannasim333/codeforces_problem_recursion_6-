#include <stdio.h>

void count_vowels(char *s, int index, int *count)
{
    if (s[index] == '\0')
        return;

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' ||
        s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
    {
        (*count)++;
    }

    count_vowels(s, index + 1, count);
}

int main()
{
    char s[201];
    fgets(s, 200, stdin);
    int count = 0;
    count_vowels(s, 0, &count);
    printf("%d\n", count);
    return 0;
}