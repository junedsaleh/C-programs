#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{

		int i,j,k,cnt=0,un=1,nm=1,mm=1,max=0;


	//	int a[10] ={1,2,2,2,5,6,7,8,9,10};     //UM
		int a[10] ={1,2,2,2,5,6,7,7,7,10};     //mm
	//	int a[10] ={1,2,3,4,5,6,7,8,9,10};      //NM

		int freq[10]={1,1,1,1,1,1,1,1,1,1 };

	clrscr();

	for (i=0;i<10;i++)
	{
		cnt=1;
		for(j=i+1;j<10;j++)
		{
			if (a[i] == a[j])
			{
				cnt++;
			}
			freq[i] = cnt;
		}
	}

	for(j=0;j<10;j++)
	{
		printf("\n %d  : %d",a[j],freq[j]);
	}

	for(j=0;j<10;j++)
	{
		if (freq[j] > 1)
		{
		    nm = 0;     // case of no mode
		}
		if (max < freq[j])
		{
			max = freq[j];
		}
	}

	printf("\n max is : %d ",max);
	printf("\n\n");
	for(j=0;j<10;j++)
	{
		if (freq[j] == max)
		{
			printf("\n %d ",a[j]);
			mm++;
		}
	}
	if (nm == 0)
	{
		if (mm > 2)
		{
			printf(" case of MM");
		}
		else
		{
			printf(" case of UM");
		}
	}
	else
	{
		printf(" case of NM");
	}
	getch();
}
