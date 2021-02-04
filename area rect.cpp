#include <iostream>
using namespace std;
int main()
 {
 	float l;
 	float w;
 	float a;
 	cout<<"enter length";
 	cin>>l;
 	cout<<"enter width";
 	cin>>w;
 	if (l<1)
 	{
 		cout<<"error"<<endl;
	}
	a = l*w;
	cout<<"area is"<<a<<endl; 
	return 0;
}
