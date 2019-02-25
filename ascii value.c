#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	int a=c;
	if(a>=65&&a<=90)
	printf("capital letter");
	else if(a>=97&&a<=122)
	printf("small letter");
	else if(a>=48&&a<=57)
	printf("digit");
	else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
	printf("special symbol");
}
