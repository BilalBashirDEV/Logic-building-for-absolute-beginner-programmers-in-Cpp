#include <iostream>
using namespace std;
int main()
 {
 	char c;
 	int a;
 	int b;
 	cout<<"enter a value"<<endl;
 	cin>>a;
 	cout<<"enter second value"<<endl;
 	cin>>b;
 	cout<<"enter operation to perform"<<endl;
 	cin>>c;
 	if (c=='+' || c=='-' || c=='/' || c=='*')
 	{
 		if (c=='+')
 		{
 			cout<<"a+b="<<a+b<<endl;
		 }
		 else if (c=='-')
		 {
		 	cout<<"subtract"<<a-b<<endl;
		 }
		 else if (c=='/')
		 {
		 	if (b!=0)
		 	{
		 	cout<<"divide"<<a/b<<endl;
			}
			else
			{
				cout<<"math error"<<endl;
			}
		 }
		 else if (c=='*')
		 {
		 	cout<<"multiply"<<a*b<<endl;
		 }
	 }
	 else
	 {
	 	cout<<"enter valid operation"<<endl;
	 }
	return 0;
}
