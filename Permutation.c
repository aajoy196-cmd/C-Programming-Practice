#include <stdio.h>

void permutation(char str[], int start, int end)
{
    if(start == end)
    {
        printf("%s\n", str);
        return;
    }

    for(int i = start; i <= end; i++)
    {
        char temp = str[start];
        str[start] = str[i];
        str[i] = temp;

        permutation(str, start + 1, end);

        temp = str[start];
        str[start] = str[i];
        str[i] = temp;
    }
}

int main()
{
    char str[] = "ABC";

    permutation(str, 0, 2);

    return 0;
}
