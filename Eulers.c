#include<stdio.h>
float fun(float x,float y)
{
	//int x;
	return((y-x)/(y+x));
	
}
void main()
{
	int i,j;
	float z=0.00,x1,x=0.0,y=1.0,h;
	
	printf("enter the value of h:\n");
	scanf("%f",&h);
	printf("enter the value of x at:\n");
	scanf("%f",&x1);
	j=x1/h;
	for(i=0;i<j;i++)
	{
		z=z+h*fun(x,y);
		x=x+h;
		y=z;
		/*/if(z>0.0)
			u=x1;
		else
			l=x1;*/
		printf("x=%f,\tf(x)=%f\n",x,y);
			
	}
	
}
