#include<stdio.h>
int main(){
  int a[3][3],i,j;
  float determinant=0;

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

   printf("\n\nSetting zero in upper triangular matrix\n");
   for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           if(i<=j)
             printf("%d\t",a[i][j]);
           else
             printf("%d\t",0);
  }

printf("\n\nSetting zero in Lower triangular matrix\n");
   for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           if(j<=i)
             printf("%d\t",a[i][j]);
           else
             printf("%d\t",0);
  }

   return 0;
}
