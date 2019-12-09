#include<stdio.h>
int ispalindrome(int n)
{
	int rev=0,buffer=n;
	while(n!=0)
	{
	rev = rev * 10 + (n%10);
	n /=10;	
	}
	if(buffer==rev)
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
	int i,a1,a2,res,pcnt=0;
	scanf("%d%d",&a1,&a2);
	for(i=a1;i<=a2;i++)
	{
		if(i%2==0)
		{
			res = ispalindrome(i);
			if(res==1)
			{
				pcnt++;
			}
		}
	}
	printf("%d",pcnt);
	return 0;
}
