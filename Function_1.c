#include <stdio.h>

int abc(int x, int y); 

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = abc(a, b); // Function call
    printf("%d", c);
    return 0;
}

int abc(int x, int y) // Function definition
{
    int z;
    z = x + y;
    return z; // Return the sum
}
// 10 20
// 30