#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char a[50], b[50];

    // Read input string
    scanf(" %[^\n]", a);

    // Calculate the length of the string
    n = strlen(a);

    // Reverse the string
    for (i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("%s\n", b);

    return 0;
}


// Rabby Khan
// nahK ybbaR