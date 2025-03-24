#include <stdio.h>
void abc(int x,int y)
{
    int  z;
    z = x + y;
    printf("%d", z);
}

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    abc(a, b);

    return 0;
}

// 10 20
// 30