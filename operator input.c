#include<stdio.h>
void main()
{
	int a,b;
	char c;
	scanf("%d%d%",&a,&b);
	scanf("%c",&c);
	int d=c;

	int s;
	switch(d)
	{
		case 43:
			s=a+b;
			break;
	    case 45:
			s=a-b;
			break;	
	    case 42:
			s=a*b;
			break;
		case 47:
			s=a/b;
			break;
		default :
		printf(" invalid symbol");	
		break;	
	}
	printf("%d",s);
}
