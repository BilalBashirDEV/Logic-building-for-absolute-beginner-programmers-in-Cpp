#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
using namespace std;
class books
{
	public:
	char bkname[20];
	int bknmbr;
	char authorname[20];
	public:
		void addbooks();
		void viewbooks();
		void showbook();
		void srch();
};
void books::srch()
{
	string x;
	ifstream b;
	int g;
	string line;
	b.open("tt.txt");
	cin>>x;
	for(int i=0;!b.eof();i++){
	
	while (!b.eof())
	{
		getline(b,line);
		if(((g=line.find(x,0))) != string::npos){
			cout<<"jjj"<<x<<i<<endl;
		}
		
		
	}}
	b.close();
	
}
