#include<stdio.h>

void main()
{
	int n,sum=0,i,b;
	printf("enter 3 digit no");
	scanf("%d",&n);
	int d=n;
	for(i=1;i<=3;i++)
	{   
	b=n%10;
		int a=b*b*b;
		sum=sum+a;
		n=n/10;
	}
	if(sum==d)
	printf("armstrong no");
	else
	printf("not armstrong no");
}
