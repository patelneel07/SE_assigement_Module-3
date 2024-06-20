 //14.WAP to find the largest of three numbers. 
 #include<stdio.h>
 main()
 {
 	int a,b,c;
 	printf("\n\n\t Enter the numbers : ");
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if (a>b && a>c)
        {
            printf("\n\t this num is largest:%d",a);
        }
    else if (b>a && b>c)
        {
            printf("\n\t this num is largest:%d",b);
        }
    else if (c>a && c>b)
        {
            printf("\n\t this num is largest:%d",c);
        }
    else 
        {
                exit(0);
        }      
 }
