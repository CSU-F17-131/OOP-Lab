#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username,password;
	for(int i=1;i<=3;i++)
	{
	cout<<"Enter Username : ";
	getline(cin,username);
	cout<<"Enter pasword : ";
	getline(cin,password);
	{
	if(username=="abcd" && password=="pakistan")
	{
		cout<<"Login successul";
		i=4;
	}
	else
	{
		cout<<"Login Failed"<<endl;
	}
	}
	}

	
}
