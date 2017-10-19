#include<stdio.h>
void main()
{
	int i, a[10][10],j;
	float x=0.0,y=0.0,z=0.0;
	printf("Enter the value of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<10;i++)
	{
			printf("%f\t%f\t%f\n",x,y,z);
			x=(a[0][3]-(a[0][1]*y)-(a[0][2]*z))/a[0][0];
			y=(a[1][3]-(a[1][0]*x)-(a[1][2]*z))/a[1][1];
			z=(a[2][3]-(a[2][1]*y)-(a[2][0]*x))/a[2][2];
		//8	printf("%f\t%f\t%f\n",x,y,z);
	}

}
