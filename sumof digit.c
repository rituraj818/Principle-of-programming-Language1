#include<stdio.h>
void main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		int a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("%d",s);
}
