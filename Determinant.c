#include<stdio.h>
int main(){
  int a[3][3],i,j;
  int determinant=0;

  printf("Enter the 9 elements of matrix:\n");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);

  printf("\nThe First matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }

  for(i=0;i<3;i++)
      determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

  printf("\nDeterminant of matrix is: %d",determinant);

   return 0;
}
