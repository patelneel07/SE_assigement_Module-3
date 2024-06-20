//1. Write a program to find out the max number from given array using function 
#include <stdio.h>

int main() {
    int arr[]={45,67,88,55};  
    int n, i, max;

    printf("\n\n\t The number of elements: ");


    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];  
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\n\n\tMaximum of All: %d\n", max);
}
