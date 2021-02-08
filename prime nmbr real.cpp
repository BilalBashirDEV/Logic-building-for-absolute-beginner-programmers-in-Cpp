#include <iostream>
using namespace std;
int main() {
	int x,y,z,i;
	z=0;
	cout<<"enter a number to check if it is a prime number or not"<<endl;
	cin>>x;
	if (x==0 || x==1)
	{
		cout<<"number is not prime"<<endl;
	}
	else{
	
	for(y=2;y<x;y++)
	{
		if(x%y==0)
		{
			z++;
		}
	}
	if (z>=1)
	{
		cout<<"number is not prime nmbr"<<endl;
	}
	else
	{
		cout<<"number is prime nmbr";
	}}
	return 0;
}
