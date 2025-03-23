#include <stdio.h>

int main()
{
    char str[100];

    // Read input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read until newline

    // Convert lowercase letters to uppercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }

    // Print the modified string
    printf("Uppercase string: %s\n", str);

    return 0;
}

// Enter a string: Rabby khan is a good student
// Uppercase string: RABBY KHAN IS A GOOD STUDENT