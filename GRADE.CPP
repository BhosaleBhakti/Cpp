#include<iostream.h>
#include<conio.h>
#include<stdiop.h>
int main()
{
clrscr();
int marks;
cout<<"enter marks";
cin>>marks;
if(marks>=90)
{
cout<<"u got have A+ grade";
}
else if(marks>=80)
{
cout<<"B+ grade";
}
else if(marks>=70)
{
cout<<"c+ grade";
}
else if(marks<=70)
{
cout<<"failed!";
}
getch();
}