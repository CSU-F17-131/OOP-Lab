#include<iostream>
using namespace std;
struct length
{
	float feet;
};
int main()
{
	float inch;
	length l1;
	cout<<"Enter lenght in feet : ";
	cin>>l1.feet;
	inch=l1.feet*12;
	cout<<"Length in inches : "<<inch<<" ft";`
}
