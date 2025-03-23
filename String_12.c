#include <stdio.h>

int main()
{
    char str[50];
    int space_count = 0;

    // Read input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read until newline

    // Count spaces
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space_count++;
        }
    }

    // Print the number of spaces
    printf("Number of spaces: %d\n", space_count);

    return 0;
}

// Enter a string: Rabby Khan is a hardworking person
// Number of spaces: 5