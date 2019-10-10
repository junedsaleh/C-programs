#include<stdio.h>
#include<conio.h>
void main()
{
	int min,max,nm,mm,v;
	float n;
	clrscr();
	printf("Min Max Normalization");
	printf("\n Min = 12000 \t\t Max = 98000");
	printf("\n New Min = 1 \t\t New Max = 10");
	printf("\n V = 73000");
	min = 12000;
	max = 98000;
	nm = 1;
	mm = 10;
	v = 73600;
	n = (v - min);
	  //  printf("\n New v = %f",n);
	n = n / (max - min);
	//printf("\n New v = %f",n);
	n = n * (mm - nm) + nm;
	printf("\n New v = %f",n);
//	printf("\n New v = %f",n);
	getch();
}