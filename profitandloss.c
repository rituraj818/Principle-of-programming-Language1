#include<stdio.h>
void main()
{
	float cp,sp,l,p;
	scanf("%f%f",&cp,&sp);
	float per;
	
	if(cp>sp)
	{
	l=cp-sp;
	per=(l/cp)*100;
   }
	else
	{
	p=sp-cp;
	
	per=(p/cp)*100;
    }
    printf("%f",per);
}
