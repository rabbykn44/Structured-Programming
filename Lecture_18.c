#include <stdio.h>
void d2b(int n);
int main()
{
    int n;
    scanf("%d", &n);
    d2b(n);

    return 0;
}
void d2b(int n)
{
    if (n != 1)
        d2b(n / 2);
    printf("%d ", n % 2);
}

// 14
// 1 1 1 0  Decimal; to binaray recursive call
