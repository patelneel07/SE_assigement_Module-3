//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable 

#include<stdio.h>

main()
 {
    int num1, num2, temp;

    printf("\n\n\t Enter value of num1: ");
    scanf("%d", &num1);
    printf("\n\n\t Enter value of num2: ");
    scanf("%d", &num2);

    printf("\n\n\t Before swapping: num1 = %d, num2 = %d", num1, num2);

    
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\n\t After swapping: num1 = %d, num2 = %d", num1, num2);

}
