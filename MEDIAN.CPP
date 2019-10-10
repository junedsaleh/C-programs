#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[9]={10,20,30,40,50,60,70,80},j=0,i=0,m=0,nm=0,d=0;
	printf		\n");
	for(i=0;i<arr[i];i++)
	{
		printf("%d \t",arr[i]);
		j++;
	}

	if(!(j%2==0))
	{
		//m=j/2;
	       m =arr[j/2];
		printf("\n Median is %d\n",m);
	}
	else
	{
		m=(arr[j/2]+arr[(j/2)-1])/2;
		printf("\n Median is %d\n",m);
	}
	arr[8]=m;
	arr[9]=m;
	printf("\n After \n");
	j=0;
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
		j++;
	}

	if(!(j%2==0))
	{
		//m=j/2;
	       nm =arr[j/2];
		printf("\n Median is %d\n",nm);
	}
	else
	{
		nm=(arr[j/2]+arr[(j/2)-1])/2;
		printf("\n Median is %d\n",nm);
	}
	d=m-nm;
	printf("\n dif between old and new Median is %d",d);
	getch();
}