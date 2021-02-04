#include <iostream>
using namespace std;
int main()
 {
 	float a;
 	float b;
 	float c;
 	cout<<"enter a number"<<endl;
 	cin>>a;
 	cout<<"enter 2nd number"<<endl;
 	cin>>b;
 	cout<<"enter 3rd number"<<endl;
 	cin>>c;
 	if (a==b && b==c && c==a)
 	{
 		cout<<"numbers are equel"<<endl;
	 }
 	if (a>b && a>c)
 	{
 		cout<<"a is maximum"<<endl;
	 }
	if (b>c && b>a)
	{
		cout<<"b is max"<<endl;
	}
	if (c>a && c>b)
	{
		cout<<"c is max"<<endl;
	}
	return 0;
}
