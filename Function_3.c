#include <stdio.h>
int abc()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z = x + y;
    return z; // Return the sum
}

int main()
{
    int c;
    c = abc(); 
    printf("%d", c);
    return 0;
}

// 10 20
// 30