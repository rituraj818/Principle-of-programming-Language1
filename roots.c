#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter cofficients of x2 x and x0");
	scanf("%f%f%f",&a,&b,&c);
	float r1=(-b+sqrt((b*b-4*a*c)))/(2*a);
   float r2=(-b-sqrt((b*b-4*a*c)))/(2*a);
   printf("%0.2f %0.2f",r1,r2);	
}
