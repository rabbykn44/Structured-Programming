#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[50], b[50];
    scanf("%[^\n] %[^\n]", a, b);
    i = 0;
    while(a[i]==b[i]&&a[i]!='\0'&&b[i]!='\0')
    i++;
    if (a[i] == b[i])

        printf("Same");
    else
        printf("Different");
    return 0;
}

// abc
// abd
// Different