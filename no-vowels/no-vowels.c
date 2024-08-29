// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if ((argc <= 1) || (argc > 2))
    {
        printf("Need one word!\n");
        return 1;
    }
    string word = argv[1];
    string converted = replace(word);
    printf("%s\n", converted);
}
string replace(string word)
{
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        char vowel = word[i];
        if ((vowel == 'a') || (vowel == 'e') || (vowel == 'i') || (vowel == 'o'))
        {
            switch (vowel)
            {
                case 'a':
                    vowel = '6';
                    break;
                case 'e':
                    vowel = '3';
                    break;
                case 'i':
                    vowel = '1';
                    break;
                case 'o':
                    vowel = '0';
                    break;
            }
            word[i] = vowel;
        }
    }
    return word;
}