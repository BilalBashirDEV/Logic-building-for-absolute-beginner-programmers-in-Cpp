#include <iostream>
using namespace std;
int main() {
	int x,y,z,i;
	z=0;
	cout<<"enter a number to check if it is a prime number or not"<<endl;
	cin>>x;
	for(int k=1;k<=x;k++){
	
	if (x==0 || x==1)
	{
		cout<<""<<endl;
	}
	else{
	
	for(y=2;y<k;y++)
	{
		if(k%y==0)
		{
			z++;
		}
	}
	if (z>=1)
	{
		cout<<"number is not prime nmbr"<<k<<endl;
	}
	else
	{
		cout<<z;
	}}}
	return 0;
}
