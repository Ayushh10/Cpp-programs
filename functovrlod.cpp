// to use an function intrest() and overload it according to given values
#include<iostream.h>
#include<conio.h>
float intrest(float a)
{
 float si;
si=(a*8.5*10)/100;
 return si;
}
float intrest(float a,float b)
{
 float si;
si=(a*b*15)/100;
 return si;
}
float intrest(float a,floatb,float c)
{
 float si;
si=(a*b*c)/100;
 return si;
}
void main()
{
cout<<"\n intreast is "<<intrest(10000);
cout<<"\n intreast is "<<intrest(1000,7);
cout<<"\n intreast is "<<intrest(1000,7,9);
getch();
}
