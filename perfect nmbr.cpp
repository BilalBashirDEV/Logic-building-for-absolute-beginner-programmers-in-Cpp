#include<iostream>
using namespace std;
int main(){
	int i,j,k=0,l;
	cout<<"enter a number to check wheather it is a perfect number or not"<<endl;
	cin>>i;
	for(j=1;j<i;j++){
		if(i%j==0){
			k=k+j;
		}
	}
	if(k==i){
		cout<<"is perfect number";
	}
	else
	{
		cout<<"not";
	}
	
	return 0;
}
