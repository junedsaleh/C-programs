#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[9]={1,2,3,4,5,6,7,8},tot=0,j=0,i=0,m=0,nm=0,d=0;
	printf("Before \n");
	for(i=0;i<8;i++)
	{
		printf("%d \t",arr[i]);
		tot +=arr[i];
		j++;
	}
	m=tot/j;
	printf("\n Mean is %d\n",m);
	arr[8]=m;
	arr[9]=m;
	printf("\n After \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	tot=0;
	j=0;
	for(i=0;i<=10;i++)
	{
		tot +=arr[i];
		j++;
	}
	nm=tot/j;
	printf("\n New Mean is %d",nm);
	d=nm-m;
	printf("\n dif between old and new Mean is %d",d);
	getch();
}
