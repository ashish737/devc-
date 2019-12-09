#include<stdio.h>
#include<math.h>
int digitcount(int n) 
{
	int cnt=0;
	while(n!=0)
	{
		cnt++;
		n /=10;
	}
	return cnt;
}
int main()
{
	int x,dgtcnt,r,sum=0;
	scanf("%d",&x);
	dgtcnt = digitcount(x);
	while(x!=0){
		r = x % 10;
		sum = sum + pow(r,dgtcnt);
		x /= 10;
	}
	printf("%d",sum);
	return 0;
}
