#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("values of a and b after swapping : %d %d",a,b);
	
}
