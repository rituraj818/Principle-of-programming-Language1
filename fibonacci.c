#include<stdio.h>
void main()
{
	int a=0,b=1,i;
	int n;
	scanf("%d",&n);
	printf("%d\n%d",a,b);
	for(i=1;i<=n-2;i++)
	{   int s=a+b;
		a=b;
		b=s;
		printf("\n%d",b);
	}
}
