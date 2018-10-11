#include<iostream>
using namespace std;
int main()
{
	long n[4],s;
	for(int i=1;i<=4;i++)
	{
		cout<<"Enter number "<<i<<" = ";
		cin>>n[i];
	}
	for(int i=4;i>=1;i--)
	{
		cout<<n[i];
		s=s+n[i];
	}
	cout<<" = "<<s;

}
