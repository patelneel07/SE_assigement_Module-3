//2.WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven) 
#include <stdio.h>

int main() {
    int choice,num1, num2, result;


	printf("\n\n\tEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\n\n\t 1. Addition\n");
    printf("\n\n\t 2. Subtraction\n");
    printf("\n\n\t 3. Multiplication\n");
    printf("\n\n\t 4. Division\n");
    printf("\n\n\t Enter your choice : ");
    scanf("%d", &choice);

    

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\n\n\t Result: %d", result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n\n\t Result: %d", result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n\n\tResult: %d", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("\n\n\t Error! Division by zero.");
            } else {
                result = num1 / num2;
                printf("\n\n\tResult: %d", result);
            }
            break;
        default:
            printf("\n\n\t Invalid choice! Please enter a number between 1 and 4.");
    }

    
}
