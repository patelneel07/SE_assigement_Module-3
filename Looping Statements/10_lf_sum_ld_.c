//10.Write a program you have to make a summation of first and last Digit.

#include <stdio.h>

main()
 {
    int num, fD, lD,sum;


    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    
    lD = num % 10;


    while (num >= 10) {
        num /= 10;
    }
    fD = num;

    sum = fD + lD;


    printf("\n\n\t Sum of first and last digits: %d\n", sum);

    
}

