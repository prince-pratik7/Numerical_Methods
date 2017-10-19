#include<stdio.h>
float fun(float x)
{
	return(x*sin(x)+cos(x));
}
float dfun(float y)
{
	return(2*y+2);
}
void main()
{
	int i;
	float x1,x0=1.0;
	for(i=0;i<10;i++)
	{
		x1=x0-(fun(x1)/dfun(x1));
		
		printf("%f\t%f\t%f\n",x1,fun(x1),dfun(x1));
		x0=x1;
	}
	//printf()
}
