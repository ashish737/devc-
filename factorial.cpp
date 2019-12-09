#include<stdio.h>
int factorial(int x)
{
	int i,fac=1;
	for(i=x;i>0;i--)
	{
	fac *=i;
	}
	{
		return fac;
	}
}
int main()
{
	int n,r,s=0,buffer;
	scanf("%d",&n);
	buffer = n;
	while(n != 0)
	{
	    r = n % 10;
	    s = s + factorial(r);
	    n /= 10;
	}
			if(s == buffer)
			{
				printf("yes");
			}
		else
		{
			printf("no");
		}
	return 0;
}
