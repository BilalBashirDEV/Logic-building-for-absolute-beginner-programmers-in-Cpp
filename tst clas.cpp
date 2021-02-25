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
	int bknmbr;
	char authorname[20];
	public:
		void addbooks();
		void viewbooks();
		void showbook();
};
void books::showbook()
{
	books bk;
	ifstream b;
	ofstream c;
	b.open("tt.txt",ios::in);
	b>>bk.authorname>>bk.bkname>>bk.bknmbr;
	cout<<bk.authorname<<bk.bkname<<bk.bknmbr;
}
void books::viewbooks()

		{
		 //string x;
		 //cin>>x;
		books bk;
		ifstream b;
		b.open("tt.txt");
		b.read((char*)this,sizeof(*this));
		while(!b.eof())
		{
			if(strcmp("thomas",bk.bkname)){
				showbook();
			}
			
			b.read((char*)this,sizeof(*this));
		}
		b.close();
		}
int main()
{
	books obj;
	obj.viewbooks();
}
