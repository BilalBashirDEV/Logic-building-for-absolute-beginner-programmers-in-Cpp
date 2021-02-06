#include <iostream>
using namespace std;
int main() 
{
	int i, n;
	n=6;
	for(i=0;i<20;i++)
	{
		cout<<"enter a nmbr"<<endl;
		cin>>n;
	
		if(n>6)
		{
			cout<<"u enter larger number than actual"<<endl;
			
			
		}
		else if(n<6)
		{
			cout<<"u enter smaller nmbr thann actual"<<endl;
			
		
			
		}
		else if(n==6)
		{
			cout<<"u won"<<endl;
			break;
		}
	}

	
	
	return 0;
}
