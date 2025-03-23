#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;

    char a[50];
    scanf(" %[^\n]", a);
    i = 0;
    while (a[i] != '\0')
    {

        i++;
    }
    printf("%d", i);
    return 0;
}
// Rabby khan
// 10 built in chara length bar korar process