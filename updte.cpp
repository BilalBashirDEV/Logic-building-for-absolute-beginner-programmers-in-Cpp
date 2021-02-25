#include<iostream>
#include<fstream>
#include<string.h>
//#include<cstdlib>
//#include<bits/stdc++.h>
using namespace std;
class books
{
	private:
	char bkname[20];
	char bknmbr[10];
	char authorname[20];
	public:
		void addbooks();
		void viewbooks();
		void showbook();
		void updatebooks();
	};
void books::updatebooks()	
{
	books z;
		ifstream b;
		ofstream d;
		b.open("tt.txt",ios::in);
		d.open("gg.txt");
		string s2,temp,s3 ,s4;
        	//cin>>s2>>s3>>s4; // "hhh iii 888";
        	string v;
			cin>>s2>>s3>>s4;
			string r = v;
		string h,j,k;//	void books::viewbookss() = v;
		while(getline(b,v))
		//while(!b.eof())
		{
		//	b>>temp;
			  if(v!=(s2+" "+s3+" "+s4))
			  {
			  	d<<v<<endl;
			  }
			  else if(v==(s2+" "+s3+" "+s4))
			  {
			  	cin>>h>>j>>k;
			  	d<<h<<j<<k<<endl;
			  }
		}
		b.close();
		d.close();
		remove("tt.txt");
		rename("gg.txt","tt.txt");
	//	string h,j,k;
	//	cout<<"enter"<<endl;
	//	cin>>h>>j>>k;
		ofstream c;
		
		c.open("tt.txt",ios::app);
		c<<h<<j<<k;
		c.close();
		//c<<h<<j<<k<<endl;
	//	string s=s2+s3+s4;
		//while(!b.eof()&&temp==v){
		//	b>>temp;
		//	getline(b,v);
		//	v=s;
		//	while(b>>temp)
		//	{
		//		if(temp==v)
		//		{
		//			temp=s2;
		//		}
				//temp +="\n";
			//	d<<s;
			}
		//	getline(b,v);
		//		d<<s;
		
		//	b.close();
		//	d.close();}
			
int main()
{
	books obj;
	obj.updatebooks();
			}			
