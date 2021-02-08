#include <iostream>
using namespace std;
int main(){
	int x,y,z,i,j=0;
	cout<<"enter a range to print prime numbers"<<endl;
	cin>>x;
	z=2;
	for(i=2;i<x;i++)
	{
		for(y=2;y<i;y++)
		{
			if(i%y == 0)
			{
				j++;
			}}
		if (j==0){
		cout<<y<<endl;
	
	    }
	    else{
	    	j=0;
		}
		
	
	}
	return 0;
}
