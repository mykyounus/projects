#include<iostream.h>
#include<conio.h>
#include<process.h>

class bank
{
 public:
  char uname[25];
  int dep,with,bal,phno,acno;
  bank()
  {
  bal=1000;
  }

  void reg();
  void deposit();
  void withdraw();
  void balance();

};

void bank::reg()

{

cout<<"enter the uname register:"<<endl;
cin>>uname;

cout<<"enter the phone number:"<<endl;
cin>>phno;

cout<<"enter the account number:"<<endl;
cin>>acno;

}

void bank::deposit()

{

cout<<"enter the amount to deposit:"<<endl;
cin>>dep;
bal=bal+dep;
cout<<"ur amount will be deposited:"<<endl;

}

void bank::withdraw()

{

cout<<"enter the amount to withdraw:"<<endl;
cin>>with;
bal=bal-with;
cout<<"amount withdraw:"<<endl;

}

void bank::balance()

{

cout<<"the balance amount is:"<<bal<<endl;

}

void main()

{

clrscr();
bank a;
int ch;
getch();

Do
{
cout<<"0.reg:"<<endl;
cout<<"1.deposit:"<<endl;
cout<<"2.withdraw:"<<endl;
cout<<"3.balance:"<<endl;
cout<<"4.exit:"<<endl;
cout<<"5.enter the choice(0-4):"<<endl;
cin>>ch;
clrscr();
switch(ch);