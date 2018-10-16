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
		if(n[i]>0)
		{
		cout<<n[i];
		s=s+n[i];
	}
	else
	{
	cout<<"Wrong Input";
	break;
	}
	cout<<" = "<<s;
	
}
}

