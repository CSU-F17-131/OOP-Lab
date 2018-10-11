#include<iostream>
using namespace std;
int main()
{
	int n;
	long long x=1;
	cout<<"Enter a Number = ";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		x=x*i;
	}
	cout<<"Factorial = "<<x;
}
