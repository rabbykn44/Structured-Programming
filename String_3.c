#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    char a[50];
    scanf(" %[^\n]", a);
    n = strlen(a);
    printf("%d", n);
    return 0;
}
