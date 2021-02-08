#include <iostream>
using namespace std;
int main() {
	int x,y;
	cout<<"enter a number"<<endl;
	cin>>x;
	for(y=1;y<=x;y++)
	{
		if (x%y==0)
		{
			cout<<y;
		}
	}
	return 0;
}
