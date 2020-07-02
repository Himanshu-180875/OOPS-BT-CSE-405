#include<iostream>
#include<fstream>
using namespace std;
class Handle
{
public:
	void copy1(string a,string b)
	{ 
        char data;
		ofstream fout;
		ifstream fin;
		fin.open(a.c_str());
		fout.open(b.c_str());

		while(fin.get(data))
		{
           
            // cout<<data;
            fout<<data;

		}

		fout.close();
		fin.close();

	}
	
};
int main()
{
	Handle obj;
	string s,g;
	cout<<"enter the path of the file along with filename from where you waana copy?";
	cin>>s;
	cout<<"enter the path along with filename where you want to copy?";
	cin>>g;
	obj.copy1(s,g);
	return 0;
}
