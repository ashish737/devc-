#include <stdio.h>
int isprime(int n)
{
	int i,flag=0;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i,a1,a2,res;
	scanf("%d%d",&a1,&a2);
	for(i=a1;i<=a2;i++)
	{
		res = isprime(1);
		if(res==1)
		{
			printf("%d",1);
		}
	}
	return 0;
}
