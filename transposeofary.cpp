//transpose of array
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
inta[4][4],i,j,t;
cout<<"\n enter array elements ";
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
cin>>a[i][j];
clrscr();
cout<<"\n before transposing array is ";
for(i=0;i<3;i++)
{
cout<<"\n";
 for(j=0;j<3;j++)
cout<<a[i][j]<<" ";
}
for(i=0;i<3;i++)
{
 for(j=i+1;j<3;j++)
 {
  t=a[i][j];
  a[i][j]=a[j][i];
  a[j][i]=t;
 }}
cout<<"\n transposed array is ";
for(i=0;i<3;i++)
{
cout<<"\n ";
 for(j=0;j<3;j++)
cout<<a[i][j]<<" ";
}getch();}
