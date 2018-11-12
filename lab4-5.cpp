#include<iostream>
using namespace std;
struct student
{
	char name[20];
	char rollno[15];
	char dep[15];
	char sec[4];
};
student p;
void student()
{
	cout<<"Enter Student Name : ";
	cin>>p.name;
	cout<<"Enter Roll No : ";
	cin>>p.rollno;
	cout<<"Enter Department : ";
	cin>>p.dep;
	cout<<"Enter Section : ";
	cin>>p.sec;
}
void showstudent()
{
	cout<<"Student Name : "<<p.name<<endl;
	cout<<"Roll No : "<<p.rollno<<endl;
	cout<<"Department : "<<p.dep<<endl;
	cout<<"Section : "<<p.sec<<endl;
}
void showstudent1()
{
	showstudent();
}
int main()
{
	student();
	showstudent();
	showstudent1();
}
