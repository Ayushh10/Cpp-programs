// wap to check equality of strings
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char str[50],str1[50];
intlen;
cout<<"enter the string"<<endl;
gets(str1);
gets(str);
inti,j,l1,l2;

for(i=0;str[i]!='\0';i++)
 l1=i;
 for(j=0;str1[j]!='\0';j++)
 l2=j;
 if(l1==l2)
 {
int f=0;
for(int k=0;str[k]!='\0';k++)
 {
 if(str[k]!=str1[k])
 {
 f=1;
 break;
 }
 }
 if(f==0)
cout<<"string are equal"<<endl;
 else
cout<<"strings are not equal"<<endl;
}
getch();
}
