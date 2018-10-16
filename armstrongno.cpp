// wap to check armstrong no
#include<iostream.h>
#include<conio.h>
void main()
{
char ch;

clrscr();
do
{
ints,n,i,a;
cout<<"\n enter a no.";
cin>>n;
a=n;
for(s=0;a>0;a=a/10)
{
i=a%10;
s=s+(i*i*i);
}
if(s==n)
cout<<"\n armstrong no. ";
else
cout<<"\n not an armstrong no.";
cout<<"\n do u want to continue";
cin>>ch;
}
while(ch=='y'||ch=='Y') ;

getch();
}
