#include<iostream>
using namespace std;
struct student
{
	char name[15];
	char id[15];
	char dep[20];
	char sem[5];
	char cours[10];
	char marks[20];
};
struct course
{
 	char id[10];
 	char name[20];
 	char marks[5];
};
int n;
int entry()
{
		student s; course c[6];
	cout<<"Enter Student Name : ";
	cin>>s.name;
	cout<<"Enter Student ID : ";
	cin>>s.id;
	cout<<"Enter student Department : ";
	cin>>s.dep;
	cout<<"Enter Student Semester : ";
	cin>>s.sem;
	cout<<"Enter no.of Courses : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	cout<<"Enter Course Name : ";
	cin>>c[i].name;
	cout<<"Enter Course ID : ";
	cin>>c[i].id;
	cout<<"Enter Course Marks : ";
	cin>>c[i].marks;
}
}
int out()
{
	student s; course c[6];
	cout<<"Student Name : ";
	cout<<s.name<<endl;
	cout<<"Student ID : ";
	cout<<s.id<<endl;
	cout<<"Student Department : ";
	cout<<s.dep<<endl;
	cout<<"Student Semester : ";
	cout<<s.sem<<endl;
	for(int i=1;i<=n;i++)
	{
	cout<<"Course Name : ";
	cout<<c[i].name<<endl;
	cout<<"Course ID : ";
	cout<<c[i].id<<endl;
	cout<<"Course marks : ";
	cout<<c[i].marks<<endl;
}
}
int main()
{

	entry();
	out();
}
