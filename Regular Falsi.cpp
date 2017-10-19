#include<stdio.h>
#include<math.h>
float fun(float x)
{
	//int x;
	return((x*x*x)+(2*x)-2);
	
}
int main()
{
	int i;
	float z,x1,l=0.0,u=1.0;
	for(i=0;i<10;i++)
	{
		x1=((l*fun(u))-(u*fun(l)))/(fun(u)-fun(l));
		
		z=fun(x1);
		if(z>0.0)
			u=x1;
		else
			l=x1;
		printf("x=%f,\tf(x)=%f\n",x1,z);
			
	}
return 0;	
}
