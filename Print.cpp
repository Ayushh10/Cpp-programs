// to print characters n times
#include<iostream.h>
#include<conio.h>
void copy(char[],int);
void main()
{
clrscr();
 char ch[10];
int a;
cout<<"\n enter character ";
cin>>ch;
cout<<"\n enter no. of times charcater must be copied ";
cin>>a;
 copy(ch,a);
getch();
}
void copy(char ch[],inti)
{
int a;
 for(a=0;a<i;a++)
cout<<ch<<" ";}
