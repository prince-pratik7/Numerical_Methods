/*
 * C program to determine if a given matrix is a sparse matrix.
 * Sparse martix has more zero elements than nonzero elements.
 */
#include <stdio.h>
 
void main ()
{
     int array[10][10],array1[10][10],mul[10][10];
    int i, j, m, n,k,p,q;
    int counter = 0;
 
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        
        }
    }
    printf("Enter the order of the matix \n"); 
	 scanf("%d %d", &p, &q);
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < p; ++i)
    {
        for (j = 0; j < q; ++j)
        {
         
		 	   scanf("%d", &array1[i][j]);
        
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
        	mul[i][j]=0;
            for (k = 0; k < p; k++)
				mul[i][j]=mul[i][j]+(array[i][k]*array1[k][j]);
			        
        }
}
for (i = 0; i < m; ++i)
    {
        for (j = 0; j < q; ++j)
        {
         
		 	   printf("%d\t", array1[i][j]);
        
        }
        printf("\n");
    }
}
