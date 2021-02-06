#include <iostream>
using namespace std;
int main()
 {
 	float n;
 	cout<<"enter marks"<<endl;
 	cin>>n;
 	if(n>89 && n<101)
 	{
 		cout<<"grade is"<<"A+"<<endl;
	 }
	 else if(n<90 && n>79)
	 {
	 	cout<<"grade is A-"<<endl;
	 }
	 else if(n>69 && n<80)
	 {
	 	cout<<"grade is B+";
	 }
	 else if (n>59 && n<70)
	 {
	 	cout<<"grade is B";
	 }
	 else if(n<60)
	 {
	 	cout<<"grade is F";
	 }
	return 0;
}
