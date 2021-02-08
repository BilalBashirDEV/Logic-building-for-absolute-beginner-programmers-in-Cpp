#include<iostream>
using namespace std;
int main(){
	int x,y=0,rem=0,i,j,k,g=1;
	cout<<"enter a number"<<endl;
	cin>>x;
	k=x;
	while(x>0){
		
		
		rem=x%10;
		x=x/10;
		
		for(j=rem;j>=1;j--)
		{
			g=g*j;
			
		}
		y=y+g;
	}
	if(y==k){
		cout<<k<<"strong number"<<endl;
	}
	else{
		cout<<"not a strong number"<<endl;
	}
	return 0;
	
}
