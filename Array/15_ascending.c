//15. Store 5 numbers in array and sort it in ascending order 

#include<stdio.h>

main()    
{    
   	     
    int arr[] = {56,78, 58, 37, 51};     
    int temp = 0;
	int i,j;    
        
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
        
    printf("\n\n\t Elements of original array:");    
    	for (i=0;i<length;i++) 
		{     
        	printf("%d ", arr[i]);     
    	}      
        
    
    for (i=0;i<length;i++)
	 {     
        for (j=i+1;j<length;j++)
		 {     
           if(arr[i] > arr[j]) 
		   {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    
    printf("\n\n\t Sorted in ascending order: ");    
    for (i=0;i<length;i++) 
	{     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}     
