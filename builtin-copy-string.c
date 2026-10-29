#include <stdio.h>
#include <string.h>

int main()
{

    char a[101];
    char b[101];

    scanf("%s %s", a, b);
    printf("%s %s\n", a, b);

    strcpy(b, a);
    printf("%s %s\n", a, b);

    return 0;
}