// insertion in 1-d array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
inta[9],i,no;
cout<<"\n enter no in ascending order ";
for(i=0;i<8;i++)
{
cout<<"\n enter a no ";
cin>>a[i];
}
cout<<"\n enter no. to be inserted in array ";
cin>>no;
for(i=7;i>=0;i--)
{
 if(a[i]>=no)
  a[i+1]=a[i];
 else
  break;
}
a[i+1]=no;
cout<<"\n new array is ";
for(i=0;i<9;i++)
cout<<a[i]<<" ";
getch();
}
