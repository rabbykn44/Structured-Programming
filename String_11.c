#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i, length;
    int isPalindrome = 1; // Assume the string is a palindrome initially

    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    length = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

// Enter a string: madam
// The string is a palindrome.