#include<iostream>
using namespace std;
int main(){
	int x,rem,result,y;
	cout<<"enter number to check wheather its a armstrong number or not"<<endl;
	cin>>x;
	result=0;
	int n=x;
	do
	{
		rem=x%10;
		x=x/10;
		result=result+(rem*rem*rem);
		
	}while(x>0);
	if(result==n){
		cout<<"nmbr is armstrong number"<<endl;
	}
	else{
		cout<<"nmbr is not an armstrong nmbr";
	}
	return 0;
}

