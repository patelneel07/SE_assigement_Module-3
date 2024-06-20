//12. Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

ain()
 {
    char str[1000];
    char *word = "is";
    int count = 0;
    int i, j;

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int str_length = strlen(str);
    int word_length = strlen(word);

    for (i = 0; i <= str_length - word_length; i++) 
	{
        int match = 1;
        for (j = 0; j < word_length; j++) 
		{
            if (str[i + j] != word[j]) 
			{
                match = 0;
                break;
            }
        }
        		if (match) 
			{
            	count++;
    
        		i += word_length - 1;
    	    }
    }

    printf("\n\n\t The word 'is' appears times in the given string. %d", count);

    return 0;
}

