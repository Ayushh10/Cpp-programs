#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
class flight
{
int fid,scap;
float fare;
char company[50],from[50],to[50];
public:int aseat;
       void input();
       void disp();
       int getfid();
       int getscap();
       float getfare();
 };
void flight::input()
{
cout<<"enter flight id"<<endl;
cin>>fid;
cout<<"enter seating capacity"<<endl;
cin>>scap;
cout<<"enter fare"<<endl;
cin>>fare;
cout<<"enter company of flight "<<endl;
gets(company);
cout<<"enter from"<<endl;
gets(from);
cout<<"enter to"<<endl;
gets(to);
}
void flight::disp()
{
cout<<"flight id="<<fid<<endl;
cout<<"seating capacity="<<scap<<endl;
cout<<"fare="<<fare<<endl;
cout<<"comapny="<<company<<endl;
cout<<"from="<<from<<endl;
cout<<"to="<<to<<endl;
}
int flight::getfid()
{
return fid;
}
int flight::getscap()
{
return scap;
}
float flight::getfare()
{
return fare;
}



class booking
{
int bid,fid,pno;
char pname[50],to[50],from[50],date[50];
public:
       void binput();
       void bdisp();
       int getbid();
       int getpno();
       int getfid(){return fid;}
       char *getdate(){return date;};
       };
void booking::binput()
{
cout<<"enter booking no"<<endl;
cin>>bid;
cout<<"enter no. of passenger "<<endl;
cin>>pno;
cout<<"enter passenger name"<<endl;
cin>>pname;
cout<<"enter flight id"<<endl;
cin>>fid;
cout<<"enter to and from"<<endl;
cin>>to>>from;
cout<<"enter date of journey"<<endl;
cin>>date;
}
void booking::bdisp()
{
cout<<bid<<"\t"<<pname<<"\t"<<pno<<"\t"<<fid<<"\t"<<to<<"\t"<<from<<"\t"<<date<<endl;
}

int booking::getbid()
{
return bid;
}
int booking::getpno()
{
return pno;
}


void main()
{
clrscr();
flight f;
booking b ;
int ch;
do
{
cout<<"press 1 to add a flight "<<endl;
cout<<"press 2 to display all available fight "<<endl;
cout<<"press 3 to search a flight "<<endl;
cout<<"press 4 to delete a flight "<<endl;
cout<<"press 5 to book seats"<<endl;
cout<<"press 6 to show Transactions"<<endl;
cout<<"press 7 to exit"<<endl;

cin>>ch;
switch(ch)
{
case 1:
clrscr();
fstream a1("flight.dat",ios::app|ios::binary);
f.input();
a1.write((char*)&f,sizeof(f));
a1.close();
break;

case 2:
clrscr();
ifstream a2("flight.dat",ios::binary|ios::in);
a2.read((char*)&f,sizeof(f));
while(!a2.eof())
{ int aa=0;
cout<<"FLIGHT"<<aa<<endl;
aa++;
cout<<endl;
f.disp();
cout<<endl<<"press key for next record";
getch();
clrscr();
a2.read((char*)&f,sizeof(f));
}
a2.close();
getch();
clrscr();
break;
case 3:
clrscr();
char m;
ifstream a3;
a3.open("flight.dat",ios::binary);
if(!a3)
{
cout<<"file does not exist "<<endl;
return;
 }
cout<<"enter flight id "<<endl;
cin>>m;
a3.read((char*)&f,sizeof(f));
while(!a3.eof())
{
if(f.getfid()==m)
{f.disp();
break;
}
a3.read((char*)&f,sizeof(f));
}
if(a3.eof())
cout<<"invlaid ID."<<endl;
a3.close();
break;

case 4:
clrscr();
ifstream a4;
ofstream a5;
a4.open("flight.dat",ios::in|ios::binary);
a5.open("temp.dat",ios::out|ios::binary);
if(!a4)
{
cout<<"file does not exist "<<endl;
return;
}
int fd;
cout<<"enter flight id of the flight to be deleted"<<endl;
cin>>fd;
a4.read((char*)&f,sizeof(f));
while(!a4.eof())
{
if(f.getfid()!=fd)
{
a5.write((char*)&f,sizeof(f));
}
a4.read((char*)&f,sizeof(f));
}
a4.close();
a5.close();
remove("flight.dat");
rename("temp.dat","flight.dat");
break;
case 5:
clrscr();
b.binput();
int bs=0;

fstream find;
find.open("booking.dat",ios::in|ios::binary);
if(!find)
{
bs=0;
}
else
{
booking t;
find.read((char *)&t,sizeof(t));
while(!find.eof())
{
if(t.getfid()==b.getfid() && strcmpi(t.getdate(),b.getdate())==0)
{
bs=bs+t.getpno();
}
find.read((char *)&t,sizeof(t));
}
find.close();
}
int flag=0;
fstream a6;
a6.open("flight.dat",ios::in|ios::binary);
a6.read((char*)&f,sizeof(f));
while(!a6.eof())
{
if(b.getfid()==f.getfid())
{
if(f.getscap()-bs>=b.getpno())
{
 flag=1;
 break;
}
}
a6.read((char*)&f,sizeof(f));
}
a6.close();
if(flag==0)
{
cout<<"either no seats available or flight not available"<<endl;
}
else
{
fstream bks;
bks.open("booking.dat",ios::app|ios::binary);
bks.write((char*)&b,sizeof(b));
bks.close();
cout<<"Booking is done";
}
break;
case 6:
booking t;
fstream tr;
tr.open("booking.dat",ios::in|ios::binary);
tr.read((char *)&t,sizeof(t));
while(!tr.eof())
{
t.bdisp();
tr.read((char *)&t,sizeof(t));
}
tr.close();
getch();
break;
}


}while(ch!=7);
getch();
}