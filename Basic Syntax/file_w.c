#include<stdio.h>
main()
{
	FILE *fptr;
	char data[50]="Hello,Today is Monday";
	
	fptr=fopen("myfile.txt","w");
	
	if(fptr=NULL)
	{
		printf("\n\n\t File not found....");
	}
	else 
	{
		printf("\n\n\t File found....");
		
		if(fptr!=EOF)
		{
			fputs(data,fptr);
		}
	}
	fclose(fptr);
}
