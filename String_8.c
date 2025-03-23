#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char a[100], b[50]; // Increased size to prevent overflow

    // Read first string
    scanf("%[^\n]", a);
    getchar(); // Consume newline

    // Read second string
    scanf("%[^\n]", b);

    // Find the length of the first string
    for (i = 0; a[i] != '\0'; i++)
        ;

    // Append second string to the first
    for (j = 0; b[j] != '\0'; j++)
    {
        a[i + j] = b[j];
    }

    a[i + j] = '\0'; // Null-terminate the concatenated string

    printf("%s\n", a);
    return 0;
}
// Rabby
// Khan
// RabbyKhan