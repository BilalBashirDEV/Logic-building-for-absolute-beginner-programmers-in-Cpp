#include <iostream>
using namespace std;
int main()
 {
 	int s;
 	int n,f,l;
 	cout<<"enter a number"<<endl;
 	cin>>n;
 	l=n%10;
 	f=n;
 	while(f>10)
 	{
 		f=f/10;
	}
	 cout<<"ist digit is"<<f<<endl;
	 cout<<"last digit is"<<l<<endl;
	 s = l + f;
	 cout<<"sum is"<<s<<endl;
 	
	return 0;
}
