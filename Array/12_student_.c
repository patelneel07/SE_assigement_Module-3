//12. WAP to accept 5 students name and store it in array 
#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
     
} 
s[5];

main()
 {
   	int i;
    printf("\n\n\t Information of Students : ");

    for (i = 0; i < 5; ++i) 
	
	{
        s[i].roll = i + 1;
        printf("\n\n\t For roll number%d,\n", s[i].roll);
        printf("\n\n\t Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("\n\n\t Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\n\t Displaying Information:\n\n");

    
    for (i = 0; i < 5; ++i) {
        printf("\n\n\t Roll number: %d\n", i + 1);
        printf("\n\n\t First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
}
