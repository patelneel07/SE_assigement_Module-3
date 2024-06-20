 //13.WAP to find minimum number among 3 numbers using ternary operator
 #include<stdio.h>
 main()
 {
 	int X, Y, Z, A;

    printf("\n\n\t Enter three numbers: ");
    scanf("%d %d %d", &X, &Y, &Z);


    A = (X < Y) ? ((X < Z) ? X : Z) : ((Y < Z) ? Y : Z);

    printf("\n\n\t Manimum number is: %d",A);
 }
