#include<iostream.h>
#include<conio.h>
void main()
{
int i,fact=1,no;
clrscr();
cout<<"enter number";
cin>>no;
for(i=1;i<=no;i++)
{
fact=fact*i;
}
cout<<"factorial of number is"<<fact<<endl;
getch();
}

