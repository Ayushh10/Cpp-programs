// wap to check a no special or not
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
intn,r,s=0,a,i,c=0;
cout<<"\n Enter a number";
cin>>n;
i=n;
a=n;
while(n>0)
{
c++;
 n=n/10;
}
while(a>0)
{
 r=a%10;
 s=s+pow(r,c);
 a=a/10;
 c--;
}
if(s==i)
cout<<"\n Special Number";
else
cout<<"\n Not a special number";
getch();
}
