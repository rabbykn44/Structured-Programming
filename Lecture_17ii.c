#include <stdio.h>
void abc(int n);
int main()
{
    int n, f;
    scanf("%d", &n);
    abc(n);

    return 0;
}
void abc(int n)
{
    if (n!= 1)
        abc(n - 1);
    printf("%d ", n);
}

// 5
// 1 2 3 4 5