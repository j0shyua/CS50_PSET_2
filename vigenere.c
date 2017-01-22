#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("Error: Please enter one command line argument (The keyword).\n");
        return 1;
    }
    
    if (argc == 2)
    {

        for (int i = 0; i < strlen (argv[1]); i++)
        {
            if (isalpha ((argv[1])[i]) == false)
            {
                printf ("Error: Please enter plaintext as the encription key. %c\n", argv[1][i]);
                return 1;
            }
        }

        string userInput = GetString();
        int keyLength = strlen (argv[1]);
        char letterCase;
        int letterPos;
        int key;
        int letterCount = 0;
        for (int i = 0, n = strlen (userInput); i < n; i++)
        {
            if (isalpha (userInput[i]))
            {
                if (userInput[i] <= 'Z')
                {
                    letterCase = 'A';
                }
                else
                {
                    letterCase = 'a';
                }
                
                letterPos = userInput[i] - letterCase;
                
                if (argv[1][letterCount % keyLength] <= 'Z')
                {
                    key = argv[1][letterCount % keyLength] - 'A';
                }
                else
                {
                    key = argv[1][letterCount % keyLength] - 'a';
                }
                
                letterCount++;
                printf("%c", (letterPos + key) % 26 + letterCase);
 
            }
            else
            {
                printf ("%c", userInput[i]);
            }
        }
        
        printf ("\n");
        return 0;
    }
}