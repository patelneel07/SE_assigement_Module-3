/*
 Write a Java program to Take three numbers from the user 
and print the greatest number. 
 */
package com.Module1;

public class Q1_mod1 
{
	public static void main(String[] args) 
	{
	
		int a=23,b=67,c=9;
	
		if (a>b && a>c)
    	{
        	System.out.println("this num is largest: "+a);
    	}
	else if (b>a && b>c)
    	{
			System.out.println("this num is largest: "+b);
    	}
	else
    	{
			System.out.println("this num is largest:"+c);
    	}

	}
}
