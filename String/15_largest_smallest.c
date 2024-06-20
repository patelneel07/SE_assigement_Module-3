//15. Write a program in C to find the largest and smallest words in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1000

void findLargestAndSmallestWords(char *str, char *largest, char *smallest) 
{
    int maxLen = 0, minLen = MAX_STRING_LENGTH;
    char *word;
    
    word = strtok(str, " ,n"); 
    while (word != NULL) 
    {
        int len = strlen(word);
        if (len > maxLen) 
        {
            maxLen = len;
            strcpy(largest, word);
        }
        if (len < minLen)
         {
            minLen = len;
            strcpy(smallest, word);
        }
        word = strtok(NULL, " ,n");
    }
}

int main() 
{
    char str[MAX_STRING_LENGTH];
    char largest[MAX_STRING_LENGTH];
    char smallest[MAX_STRING_LENGTH];

    printf("\n\n\t Enter a string: ");
    fgets(str, MAX_STRING_LENGTH, stdin);

    size_t length = strlen(str);
    if (str[length - 1] == '\n') 
	{
        str[length - 1] = '\0';
    }
    largest[0] = '\0';
    smallest[0] = '\0';

    findLargestAndSmallestWords(str, largest, smallest);

    printf("\n\n\t Largest word: %s\n", largest);
    printf("\n\n\t Smallest word: %s\n", smallest);

    return 0;

}
