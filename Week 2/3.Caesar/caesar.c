#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // Your main program will go here.
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]) % 26;

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }

    printf("\n");

    return 0;
}

bool only_digits(string s)
{
    if (s[0] == '\0')
{
    return false;
}
    // Check whether the key contains only digits.
     for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }

    return true;
}

char rotate(char c, int key)
{
    // Rotate alphabetic characters.
    if (isupper(c))
{
        return (c - 'A' + key) % 26 + 'A';
}
    else if (islower(c))
{
        return (c - 'a' + key) % 26 + 'a';
}

    return c;
}
