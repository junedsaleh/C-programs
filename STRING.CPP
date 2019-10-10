#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l,l1;
	char s[10],s1[10];
	clrscr();
	printf("Enter string 1");
	gets(s);
	printf("Enter string 2");
	gets(s1);
	l = strlen(s);
	l1 = strlen(s1);
	printf("%d",l);
	i = 0;
	while(1)
	{
		if((s[i] == NULL) && (s1[j] == NULL))
		{
			break;
		}
		if((s[i] != NULL) && (s1[i] != NULL))
		{
			printf("%c",s[i]);
			printf("%c",s1[i]);
			i++;
			if((l == l1) && ((i+1)  == l))
				break;

		}
		if((s[i] != NULL) && (s1[i] == NULL))
		{
			for(j = i;s[j];j++)
				printf("%c",s[j]);
			break;
		}
		if((s[i] == NULL) && (s1[i] != NULL))
		{
			for(j = i;s1[j];j++)
				printf("%c",s1[j]);
			break;
		 }
	}
	getch();
}