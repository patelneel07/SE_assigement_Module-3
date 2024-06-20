//8. Write a program in C to count the total number of vowels or consonants in a string. 
#include<stdio.h>
main()
{
    char sent[80];
    int i, vowels = 0, consonants = 0, special = 0;
 
    printf("\n\n\t Enter a sentence : ");
    scanf("%s",sent);
    
    
    for (i = 0; sent[i] != '\0'; i++)
    {
        if ((sent[i] == 'a' || sent[i] == 'e' || sent[i] ==
        'i' || sent[i] == 'o' || sent[i] == 'u') ||
        (sent[i] == 'A' || sent[i] == 'E' || sent[i] ==
        'I' || sent[i] == 'O' || sent[i] == 'U'))
        {
            vowels = vowels + 1;
        }
        else
        {
            consonants = consonants + 1;
        }
        if (sent[i] =='\t' ||sent[i] =='\0' || sent[i] ==' ')
        {
            special = special + 1;
        }
    }
    consonants = consonants - special;
    printf("\n\n\t No. of vowels in %s = %d ", sent, vowels);
    printf("\n\n\t No. of consonants in %s = %d", sent, consonants);
}
