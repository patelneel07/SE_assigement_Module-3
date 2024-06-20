//5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>
main()

{
	int arr[5],i,j,temp=0;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input array element [%d] : ",i);
		scanf("%d",&arr[i]);	
	}	
	printf("\n\n\t Before sorting....");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array Element [%d]:[%d]",i,arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[i]=temp;
			}
		}
	}
	printf("\n\n\t Aftre Sorting...");
	for(i = 0; i < 5; i++) 
	{
		printf("\n\n\t Array Element [%d] : %d ",i,arr[i]);
	}
}
