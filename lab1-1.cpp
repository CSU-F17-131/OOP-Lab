#include<iostream>
using namespace std;
int main()
{
	char c[14];
	for(int i=1;i<=14;i++)
	{
	cout<<"Enter"<<i<<" character :";
	cin>>c[i];
	}
	cout<<"\n\n\t\t\t";
	for(int i=1;i<=14;i++)
	{
		cout<<c[i];
	}
}
