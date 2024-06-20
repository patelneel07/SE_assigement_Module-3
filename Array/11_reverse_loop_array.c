//11. WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
main()
{
	int i,n,a[10];
	
	printf("\n\n\t Enter the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("\n\n\t Input %d number of elements in the array : ",n);
   for(i=0;i<n;i++)
      {
	  printf("\n\n\t Element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\n\n\t The values store into the array are : ");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }
 
   printf("\n\n\t The values store into the array in reverse are : ");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n\t");
}
