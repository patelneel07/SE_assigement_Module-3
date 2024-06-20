//24.1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n, sum;

    
    printf("\n\n\t Enter the value of n: ");
    scanf("%d", &n);

    
    sum = n * (n + 1) / 2;

    
    printf("\n\n\t The sum of the series 1 + 2 + 3 + ... + %d is: ", n, sum);
}
