//parameterized constructor
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class DATA
{
 char name[15];
int age;
 float sal;
 public:
 void out()
 {
cout<<"\n"<<name<<"\t "<<age<<"\t"<<sal;

 }

DATA(char nm[],inta,float s)
 {
strcpy(name,nm);
   age=a;
sal=s;
 }
};


void main()
{
clrscr();
DATA o("mohan",20,12100);
o.out();
getch();
}
