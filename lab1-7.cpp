#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c;
	double r1,r2,sqr,dis;
	cout<<"Enter value of a = ";
	cin>>a;
	cout<<"Enter value of b = ";
	cin>>b;
	cout<<"Enter value of c = ";
	cin>>c;
	dis=b*b-4*a*c;
	sqr=-sqrt(dis);
	r1=-b-sqr/2*a;
	cout<<"X1 = "<<r1<<endl;
	r2=-b+sqr/2*a;
	cout<<"X2 = "<<r2;
}
