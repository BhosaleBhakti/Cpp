#include<iostream.h>
#include<conio.h>
class Student
{
public:
void Details()
{
char Name[10];
int Roll_no;
int Standard;
char Department[10];
char Semester[10];
char Address[10];
cout<<"\nEnter student name:"<<endl;
cin>>Name;
cout<<"\nEnter rollno:"<<endl;
cin>>Roll_no;
cout<<"\nEnter standard:"<<endl;
cin>>Standard;
cout<<"\nEnter Department:"<<endl;
cin>>Department;
cout<<"\nEnter sem:"<<endl;
cin>>Semester;
cout<<"\nEnter Address:"<<endl;
cin>>Address;
 }
 };
 void main()
 {
 clrscr();
 Student s;
 s.Details();
 getch();
 }