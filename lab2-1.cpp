#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char o;
	cout<<"Enter 1st number = ";
	cin>>x;
	cout<<"Enter 2nd number = ";
	cin>>y;
	cout<<"Choose any Operation : \n+\n-\nx\n/\n";
	cin>>o;
	switch(o)
	{
		case '+':
			{
				cout<<x+y<<endl;
				break;
			}
		case '-':
			{
				cout<<x-y<<endl;
				break;
			}	
		case'x':
			{
				cout<<x*y<<endl;
				break;
			}
		case '/':
			{
				cout<<x/y<<endl;
				break;
			}
	}
}
