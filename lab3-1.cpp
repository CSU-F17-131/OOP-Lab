#include<iostream>
using namespace std;
struct employee 
	{
		char name[15];
		char date[10];
		char des [30];
	};
int main()
{
	employee p1;
	employee p2;
	cout<<"Enter Employee Name : ";
	cin>>p1.name;
	cout<<"Enter Employee date of joining : ";
	cin>>p1.date;
	cout<<"Enter Designation : ";
	cin>>p1.des;
	
	cout<<"\n\t\t\tInformation of Employee\n";
	cout<<"Name of Employee : "<<p1.name<<endl;
	cout<<"Date of joining : "<<p1.date<<endl;
	cout<<"Designation : "<<p1.des<<endl;
}
