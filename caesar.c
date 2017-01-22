#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("Error: Please enter one command line argument (Number of letters to shift). \n");
        return 1;
    }

    string userInput = GetString();
    int caesarKey = ((atoi (argv[1])) % 26);
    
    for (int i = 0, n = strlen(userInput); i < n; i++)
    {
        if (isalpha (userInput[i]) && userInput[i] <= 90)
        {
            printf ("%c", (((userInput[i] - 65) + caesarKey) % 26) + 65);
        }
        else if (isalpha (userInput[i]) && userInput[i] >= 97)
        {
            printf ("%c", (((userInput[i] - 97) + caesarKey) % 26) + 97);
        }
        else
        {
            printf ("%c", userInput[i]);
        }
    }
  
    printf ("\n");
    return 0;
}