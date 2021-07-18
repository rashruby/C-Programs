#include<stdio.h>
void lawasa();
void lonawala();
void khandala();
void sinhgad();
void khadakwasla();
int main()
{
	printf("in main method");
	lonawala();
	printf("\n Back to main");
	
}
void lawasa()
{
	printf("\n lets boat, grill eat drink");
	printf("\n snapshots");	
}
void lonawala()
{
	printf("\n we are in lonawala");
	khandala();
}
void sinhgad()
{
	printf("\n in the sinhgad");
	khadakwasla();
	printf("\n tribute to tanaji malusare");	
}
void khadakwasla()
{
	printf("\n in khadakwasla");
	lawasa();
	printf("\n lets eat corns");
}
void khandala()
{
	sinhgad();
	printf("\nkhadala ala");
 	
}
