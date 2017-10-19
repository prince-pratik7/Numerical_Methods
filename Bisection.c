#include<stdio.h>
float fun(float x)
{
	//int x;
	return((x*x*x*x)+(2*x*x*x)-x-1);
	
}
void main()
{
	int i;
	float z,x1,l=0.0,u=1.0;
	for(i=0;i<10;i++)
	{
		x1=(l+u)/2.0;
		
		z=fun(x1);
		if(z>0.0)
			u=x1;
		else
			l=x1;
		printf("x=%f,\tf(x)=%f\n",x1,z);
			
	}
	
}
