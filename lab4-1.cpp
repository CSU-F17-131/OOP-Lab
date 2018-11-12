#include<iostream>
using namespace std;
float largenumb(float x,float y)
{
	if(x>y)
	{
	return x;
	}
	else if(y>x)
	{
	return y;
	}
}
int main()
{
	float x,y;
	cout<<"Enter 1st number : ";
	cin>>x;
	cout<<"Enter 2nd number : ";
	cin>>y;
	largenumb(x,y);
	cout<<"Large number is : "<<largenumb(x,y);
}

