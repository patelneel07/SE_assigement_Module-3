//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main()
{
	char c;
	printf("\n\n\t Enter the Charater : ");
	scanf("%c",&c);
	
	if(c >= 65 && c <= 90)
      {
        printf("\n\n\t Upper Case Letter.....");
      }
   else if(c >= 97 && c <= 122)
        {
      printf("\n\n\t Lower Case letter.......");
        }
   else if(c >= 48 && c <= 57)
        {
      printf("\n\n\t Digit.....");
        }
   else
        {
      printf("\n\n\t Special Character.....");
        }
}
