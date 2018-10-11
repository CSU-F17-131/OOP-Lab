#include<iostream>
using namespace std;
int main()
{
	float math,eng,urdu,isl,sci,ttm,obtm,perc;
	cout<<"Enter maths marks out of 100 = ";
	cin>>math;
	cout<<"Enter english marks out of 100 = ";
	cin>>eng;
	cout<<"Enter urdu marks out of 100 = ";
	cin>>urdu;
	cout<<"Enter science marks out of 100 = ";
	cin>>sci;
	cout<<"Enter islamiat marks out of 50 = ";
	cin>>isl;
	ttm=450;
	obtm=math+eng+urdu+isl+sci;
	perc=obtm/ttm*100;
	cout<<"Obtained marks = "<<obtm<<endl;
	cout<<"Total marks = "<<ttm<<endl;
	cout<<"Percentage is = "<<perc;
}
