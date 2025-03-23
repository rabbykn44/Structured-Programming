#include <stdio.h>
#include <ctype.h> // For tolower() function

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    // Read input string
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read until newline

    // Count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]); // Convert to lowercase for easier checking

        // Check if the character is a letter
        if (ch >= 'a' && ch <= 'z')
        {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Print the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}