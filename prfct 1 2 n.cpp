#include<iostream>
using namespace std;
int main(){
	int i,j,k=0,l;
	cout<<"enter a range to print a perfect numbers"<<endl;
	cin>>i;
	for(l=1;l<i;l++){
	k=0;
	for(j=1;j<l;j++){
		if(l%j==0){
			k=k+l;
		}
	}
	if(k==l){
		cout<<l;
	}}
	
	
	return 0;
}
