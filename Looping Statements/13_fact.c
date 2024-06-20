 //13.calculate the Factorial of a Given Number using while loop 
 #include<stdio.h>
 main()
  {
    int n, fact= 1;
    printf("\n\n\t Enter a number : ");
    scanf("%d", &n);

    while (n > 0) {
        fact*= n;
        n--;
    }

    printf("\n\n\t Factorial : %d", fact);
    
}
