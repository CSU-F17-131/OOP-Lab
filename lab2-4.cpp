#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cout<<"Enter number = ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<"Even number = "<<i<<endl;
			s=s+i;
		}
		else
		{
			cout<<"Odd number = "<<i<<endl;
		}
	}
	cout<<"Sum of Even number = "<<s;
}
