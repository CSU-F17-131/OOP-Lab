#include<iostream>
using namespace std;
int main()
{
	int n[3];
	for(int i=1;i<=3;i++)
	{
		cout<<"Enter number "<<i<<" = ";
		cin>>n[i];
	}
	for(int i=3;i>=1;i--)
	{
		cout<<n[i];
	}
}
