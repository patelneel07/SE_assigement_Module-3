/*
 Write a program in Java to input 5 numbers from keyboard 
and find their sum and average using for loop.
 */
package com.Module1;

public class Q5_mod1 {
    public static void main(String[] args) 
    {
        
        int[] numbers = {3, 6, 9, 12, 15};
        
        int sum = 0;
        double average;
        
        
        for (int i = 0; i < numbers.length; i++) 
        {
            sum += numbers[i];
        }
        
        average = (double) sum / numbers.length;
        
        System.out.println("Sum of the numbers: " + sum);
        System.out.println("Average of the numbers: " + average);
    }
}
