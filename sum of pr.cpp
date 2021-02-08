#include <iostream>
using namespace std;
int main(){
	int x,y,z,i,j=0;
	cout<<"enter a number"<<endl; //this program will add prime numbers upto x
	cin>>x;
	z=0;
	for(i=2;i<x;i++)
	{
		for(y=2;y<i;y++)
		{
			if(i%y == 0)
			{
				j++;
			}}
		if (j==0){
		z=z+y;
	
	    }
	    else{
	    	j=0;
		}
		
	
	}
	cout<<z;
	return 0;
}
