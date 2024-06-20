 //16.Accept 5 numbers from user and perform sum of array
 
 #include<stdio.h>
 
 main()
 {
  int arr[5];
  int sum = 0;
  int i;
  
  		printf("\n\n\t Enter 5 numbers: ");
  			for (i=0;i<5;i++) 
			{
    			scanf("%d", &arr[i]);
  			}
  
  		for (i=0;i<5;i++) 
		{
    		sum += arr[i];
  		}
  
  
  printf("\n\n\t The sum of the 5 numbers is: %d",sum);
  return 0;
}
