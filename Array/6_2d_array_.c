//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include <stdio.h>
main()
 {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  
  printf("\n\n\t Enter the number of rows : ");
  scanf("%d", &r);
  printf("\n\n\t Enter the number of columns : ");
  scanf("%d", &c);

  printf("\n\n\t Enter elements of 1st matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("\n\n\t Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("\n\n\tEnter elements of 2nd matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("\n\n\t Enter element b %d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  
  printf("\n\n\t Sum of two matrices: \n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
}

