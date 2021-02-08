#include<iostream>
using namespace std; 
int main() {
	int x,y,hcf;
	cout<<"enter a number"<<endl; //only valid program if x>y
	cin>>x;
	cout<<"enter another number smaller than 1st number"<<endl;
	cin>>y;
	int i;
	for(i==1;i<=y;++i)
	{
		if(x % i==0 && y % i==0)
	{
		    hcf=i;
		}
		
	}
	cout<<hcf;
	
	return 0;
}
