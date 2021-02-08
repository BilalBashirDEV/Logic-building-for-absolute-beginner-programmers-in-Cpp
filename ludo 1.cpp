#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==4 && j==4)
			{
			
			cout<<"*";
			}
			else
			{
				if(i==1 || i==7)
				{
					cout<<"o";
				}
				else
				{
					if(j==1||j==7)
					{
						cout<<"o";
					}
					else
					{
						cout<<" ";
					}
				}
			}
		}
		cout<<endl;
		
	}
	return 0;
}
