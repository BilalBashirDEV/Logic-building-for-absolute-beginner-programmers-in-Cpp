#include<iostream>
using namespace std;
int main(){
	int x,rem,result,y;
	cout<<"enter a range to print armstrong number"<<endl;
	cin>>x;

	for(int k=1;k<=x;k++){
			result=0;
        	int n=k;
	        rem = 0;
	
	do
	{
		rem=n%10;
		n=n/10;
		result=result+(rem*rem*rem);
		
	}while(n>0);
	if(result==k){
		cout<<"nmbr is armstrong number"<<k<<endl;
	}
	
	}
	return 0;
}

