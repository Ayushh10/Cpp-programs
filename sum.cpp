// a function sum() which displays sum of two enterd no. from first to that no.
#include<iostream.h>
#include<conio.h>
intsum(intx,int y)
{
 if(x<=y)
  return x+sum(x+1,y);
 else
  return 0;
}
void main()
{
clrscr();
inta,b,S;
cout<<"\n enter a no. ";
cin>>a>>b;
 S=sum(a,b);
cout<<"\n sum is "<<S;
getch();
}
