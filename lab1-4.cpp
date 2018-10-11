#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter 1st number = ";
	cin>>a;
	cout<<"Enter 2nd number = ";
	cin>>b;
	cout<<"Enter 3rd number = ";
	cin>>c;
	if(a>b&&a>c)
	{
		cout<<a<<" is greater number";
	}
	else if(b>a&&b>c)
	{
		cout<<b<<" is greater number";
	}
	else
	{
		cout<<c<<" is greater number";
	}
}
