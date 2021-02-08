#include <iostream>
using namespace std;
int main() {
	int x,y,result;
    cout<<"enter value of x"<<endl;
    cin>>x;
    cout<<"enter value of power"<<endl;
    cin>>y;
    result=x;
    for (int i=1;i<y;i++)
    {
    	result= result*x;
	}
	cout<<result;
	return 0;
}
