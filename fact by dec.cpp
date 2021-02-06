#include <iostream>
using namespace std;
int main()
 {
 	int n,f=1;
 	int i;
 	cout<<"enter a number"<<endl;
 	cin>>n;
 	if (n==0)
 	{
 		cout<<1<<endl;
	 }
	 
 	for (int i=n;i>=1;i--)
 	{
 		f=f*i;
	 }
	 cout<<"factorial of nmber="<<f;
	return 0;
}
