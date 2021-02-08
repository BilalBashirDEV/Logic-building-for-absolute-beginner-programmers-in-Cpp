#include<iostream>
using namespace std;
int main(){
	int x,rem,result,y,i;
	cout<<"enter range toshow armstrong numbers in that range"<<endl;
	cin>>x;
	result=0;
	int n=x;
	
	for(i=x;i>=0;i--){	
	    int j=i;
	    do
    	{
     		rem=i%10;
	    	i=i/10;
	    	result=result+(rem*rem*rem);
		
    	}while(i<x);
    	if(result==j){
		
    		cout<<j<<endl;
	    	
    	}
    	else  
     	{
    		j++;
    	}
      }

	return 0;}
	


