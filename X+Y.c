#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%f   %f",(float)(x+y)/(x-y),(float)(x+y)*(x-y));
}
