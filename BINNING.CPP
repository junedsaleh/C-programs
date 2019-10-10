#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8]={5,24,36,41,54,68,77,83},b1[4],b2[4],i=0,j=0,s1=0,s2=0,m1=0,m2=0,bb1[4],bb2[4],min1=0,min2=0,max1=0,max2=0;
	clrscr();
	printf("\t Equal Frequency of Bin \n");
	for(i=0;i<8;i++)
	{
		if(i<4)
		{
			b1[i]=a[i];
		}
		else
		{
			b2[j]=a[i];
			j++;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\n Bin 1 :- %d \t\t\t Bin 2 :- %d",b1[i],b2[i]);
	}


	printf("\n\n \t\t Mean of Bin \n");
	j=0;
	for(i=0;i<4;i++)
	{
		s1 += b1[i];
		s2 += b2[i];
		j++;
	}
	m1=s1/j;
	m2=s2/j;
	for(i=0;i<4;i++)
	{
		bb1[i]=m1;
		bb2[i]=m2;
	}
	for(i=0;i<4;i++)
	{
	printf("\n Bin 1 :- %d \t\t\t Bin 2 :- %d",bb1[i],bb2[i]);
	}



	printf("\n\n \t\t Boundry of bin \n");
	min1=b1[0];
	max1=b1[3];
	min2=b2[0];
	max2=b2[3];
	for(i=1;i<3;i++)
	{
		if(b1[i]-b1[0]<b1[3]-b1[i])
		{
			b1[i]=min1;
		}
		else //if(b1[3]-b1[i]>b1[i]-b1[0])
		{
			b1[i]=max1;
		}
		if(b2[i]-b2[0]<b2[3]-b2[i])
		{
			b2[i]=min2;
		}
		else //if(b2[3]-b2[i]>b2[i]-b2[0])
		{
			b2[i]=max2;
		}
	}

	for(i=0;i<4;i++)
	{
		printf("\n Bin 1 :- %d \t\t\t Bin 2 :- %d",b1[i],b2[i]);
	}
	getch();
}