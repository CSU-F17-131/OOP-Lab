#include<iostream>
using namespace std;
int main()
{
	char r,c[4];
	for(int i=0;i<=4;i++)
	{
	cout<<"Enter character in uppercase "<<i<<" : ";
	cin>>c[i];
}
	for(int i=4;i>=0;i--)
	{
	r=c[i]+32;
	cout<<"Lowercase : "<<r<<endl;
	}
}
