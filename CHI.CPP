#include<conio.h>
#include<stdio.h>
void main()
{
  int a=250,b=200,c=50,d=1000,pa=90,pb=360,pc=210,pd=840,p,q,r,s,ans;
  clrscr();
  p=((a-pa)*(a-pa))/pa;
  q=((b-pb)*(b-pb))/pb;
  r=((c-pc)*(c-pc))/pc;
  s=((d-pd)*(d-pd))/pd;
  ans=p+q+r+s;

  printf("\t\t chi-square \n");

  printf("\n P: %d",p);
  printf("\n Q: %d",q);
  printf("\n R: %d",r);
  printf("\n S: %d",s);

  printf("\n\n The Ans: %d ",ans);
  getch();
}