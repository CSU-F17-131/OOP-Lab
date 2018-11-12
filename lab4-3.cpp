#include<iostream>
using namespace std;
void swapn(int x,int y)
{
	int z;
	cout<<"Enter 1st number : ";
	cin>>x;
	cout<<"Enter 2nd number : ";
	cin>>y;
	z=x;
	x=y;
	y=z;	
	cout<<"1st number : "<<x<<endl;
	cout<<"2nd number : "<<y<<endl;
}
int main()
{
	int x,y;
	swapn(x,y);
}
