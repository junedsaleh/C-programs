#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
   	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int ,arr[10],l=0,h=9,m,i,n,f=0;
	for(i=0;i<10;i++)
	{
		printf("\n Enter Number :- ");
		scanf("%d",&arr[i]);
	}

       //	n = 70;
		printf("\n Enter Key :- ");
		scanf("%d",&n);

	while(!(l>h))
	{
		m=(l+h)/2;
		if(arr[m]==n)
		{
			f=1;
			break;
		}
		if(arr[m]<n)
		{
			l=m+1;
			continue;
		}
		if(arr[m]>n)
		{
			h=m-1;
			continue;
		}
	}
	if(f==1)
	{
		printf("\n Key Found, %d =  %d",m, arr[m]);
	}
	else
	{
		printf("\n Key not Found %d = %d",m, arr[m] );
	}
	getch();
}
