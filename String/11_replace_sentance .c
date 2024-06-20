//11. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i;

    printf("\n\n\t Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("\n\n\t Sentence with case inverted: ");

    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            printf("%c", toupper(sentence[i]));
        } else if (isupper(sentence[i])) {
            printf("%c", tolower(sentence[i]));
        } else {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
