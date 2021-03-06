#include<stdio.h>
#include<math.h>
int fac(int n)
{
	int i,res;
	res=1;
	for(i=1;i<=n;i++)
		res*=i;
	return res;
}

int main()
{
	int i,j,k,n;
	float xi,res,h,temp;
	float x[10],y[10],delta[10][10];
	
	//Inputs
	
	printf("Enter the order:");
	scanf("%d",&n);
	printf("Enter the n+1 X's:");
	for(i=0;i<n+1;i++)
		scanf("%f",&x[i]);
	printf("Enter the Y's:\n");
	for(i=0;i<n+1;i++)
		scanf("%f",&y[i]);
	printf("Enter the Xi to be found:");
	scanf("%f",&xi);
		
	//Finding h and delta matrix
	h=x[1]-x[0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(i==0)
				delta[j][i]=y[j+1]-y[j];
			else
				delta[j][i]=delta[j+1][i-1]-delta[j][i-1];
		}
	}
	/*Printing Delta
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("%f ",delta[i][j]);
		printf("\n");
	}
	printf("\n");*/
	//Finding Result
	res=y[n];
	for(i=1;i<n+1;i++)
	{
		temp=1;
		for(j=0;j<i;j++)
		{
			temp*=(xi-x[n-j]);
		}
		res+=(delta[n-i][i-1]*temp)/(fac(i)*pow(h,i));
	}
	
	//Printing Result
	printf("Result=%f",res);
	return 0;
}