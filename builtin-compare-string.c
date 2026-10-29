#include <stdio.h>

int main()
{

    char a[101];
    char b[101];

    scanf("%s %s", a, b);
    // printf("%s %s\n", a, b);

    int result = strcmp(a, b);
    printf("%d\n", result);

    if (result < 0)
    {
        printf("A is small");
    }
    else if (result > 0)
    {
        printf("B is small");
    }
    else if (result == 0)
    {
        printf("Equal");
    }

    return 0;
}