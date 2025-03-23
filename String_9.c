#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[50], b[50];
    scanf("%[^\n] %[^\n]", a, b);
    i = strcmp(a, b);
    if (i == 0)

        printf("Same");
    else
        printf("Different");
    return 0;
}