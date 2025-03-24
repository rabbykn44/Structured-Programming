#include <stdio.h>
int fact(int n)
{
    int j, f = 1;
    for (j = 1; j <= n; j++)
        f = f * j;
    return f;
}

int main()
{
    int i, n;
    float sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + (float)i / fact(i);
    printf("%.2f", sum);

    return 0;
}

// S=
// 1/
// 1!
// ​
//  +
// 2/
// 2!
// ​
//  +
// 3/
// 3!
// ​
//  +
// 4/
// 4!
// ​
//  +
// 5/
// 5!
// ​
