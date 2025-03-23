#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;

    char a[50], b[50];
    scanf(" %[^\n]", a);
    for (i = 0; a[i] != '\0'; i++)
        b[i] = a[i];
    b[i] = '\0';

    printf("%s", b);
    return 0;
}

// abc xyz
// abc xyz