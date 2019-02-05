#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=(a-~b)-1;
	printf("sum=%d",c);
}
