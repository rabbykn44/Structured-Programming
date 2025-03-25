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
    printf("%d ", n);
    if (n != 1)
        abc(n - 1);
    if (n == 1)
        printf("\n");
            printf("%d ", n);
}


// 5
// 5 4 3 2 1 
// 1 2 3 4 5 