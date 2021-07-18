#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	scanf("%f",&km);
	m=km*1000.0;
	cm=m*100.0;
	mm=m*10.0;
	printf("Distance in m %f\n",m);
	printf("Distance in cm %f\n",cm);
	printf("Distance in mm %f\n",mm);
	return 0;
	
}
