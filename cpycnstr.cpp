// copy constructor
#include<iostream.h>
#include<conio.h>
class ABC
{inta,b,c;
 public:
 void in()
 {
cout<<"\n"<<"enter a,b,c";
cin>>a>>b>>c;
}void out()
{ cout<<"\n"<<a<<" "<<b<<" "<<c; }
ABC(ABC &T)
 {a=T.a;
  b=T.b;
  c=T.c;
 } ABC ()
 {a=19;
  b=5;
  c=6;
 }};
void main()
{clrscr();
ABC O;
O.in();
ABC M=O;
M.out();
getch();
}
