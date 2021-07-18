#include<stdio.h>
void fun(int);
void fun(int a);
int main()
{
	printf("in main");
	fun(10);
	printf("\n we are back in main");
}
void fun(int a)
{

	printf("\n a=%d",a);
	
}

