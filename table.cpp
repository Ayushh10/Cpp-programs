// to display table of an entered no. using recurssive function
#include<iostream.h>
#include<conio.h>
void table (inta,int b)
{ if(b<=10)
  {cout<<"\n";
cout<<a<<"*"<<b<<"="<<(a*b);
   table(a,b+1);
  }}
void main()
{clrscr();
int a;
cout<<"\n enter no. for table ";
cin>>a;
 table (a,1);
getch();
}
