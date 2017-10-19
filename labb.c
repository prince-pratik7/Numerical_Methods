#include<stdio.h>

void main(){

  int a[3][3],i,j;
  float determinant=0.0,t;

  printf("Enter the 9 elements of matrix:\n");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);

  printf("\nThe matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
    }
    for(i=0;i<3;i++)
    	determinant=determinant+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
    if(determinant==0.0)
    	printf("\nInverse of Matrix Not Possible");
    else
    {
    	for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						t=((a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3])-(a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/determinant;
						printf("%f\t",t);
					}
					printf("\n");
				}	
	}
   
}
