//7. Accept marks from user and check pass or fail 
#include<stdio.h>
main()
{
	int sub1, sub2, sub3, sub4, sub5, total=0;
	float per;
	
	printf("\n\n\t Input Marks for Subject-1 : ");
	scanf("%d",&sub1);
	printf("\n\n\t Input Marks for Subject-2 : ");
	scanf("%d",&sub2);
	printf("\n\n\t Input Marks for Subject-3 : ");
	scanf("%d",&sub3);
	printf("\n\n\t Input Marks for Subject-4 : ");
	scanf("%d",&sub4);
	printf("\n\n\t Input Marks for Subject-5 : ");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	per=total/5;
}
	printf("\n\n\t percent %f",per);
		if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40)
			{
			
				if(per>=70)
					printf("\n\n\t Grade : A+");
				else if(per>=60)
					printf("\n\n\t Grade : A");

				else if(per>=50)
					printf("\n\n\t Grade : B");
			
				else if(per>=40)
					printf("\n\n\t Grade : C");
			}
