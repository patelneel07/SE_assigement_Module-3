//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
main()
 {
    int n, sum = 0, i = 1;

    
    printf("\n\n\tEnter a positive integer: ");
    scanf("%d", &n);

    
    while (i <= n) {
        sum += i;
        i++;
    }

    
    printf("\n\n\t sum of natural numbers from 1 to %d: %d", n, sum);
}
