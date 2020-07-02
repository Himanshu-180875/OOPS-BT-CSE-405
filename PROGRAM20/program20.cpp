Program: to read the name and roll numbers of students from keyboard and write them into a file and then display it.

#include<iostream>
using namespace std;
#include<fstream>
class File
{
  private:
  string name;
  string path;
  int roll_no;

  public:
  File(string a,int b, string c)
  {
	name=a;
	roll_no=b;
	path =c;
  }

   void write()
   {
    char data[100];
    ofstream fout;
    fout.open(path.c_str(),ios::out); 
    fout<<"Name: "<<name;
    fout<<"\nRollno: "<<roll_no;
    fout.close();
    
   }
   
   void read(){
   	char data;
   	ifstream fin;
   	fin.open(path.c_str(), ios::in);
   	while(fin.get(data)){
   		
   	cout<<data;
	   }
   	
   	
   }   	
};

int main()
{
	string path,name;
	int roll;
	cout<<"enter the path along with file name:"<<"\n";
	cin>>path;
	cout<<path<<"\n";
	cout<<"enter the name:"<<"\n";
	cin>>name;
	cout<<"enter the roll no:"<<"\n";
	cin>>roll;
	File obj(name,roll,path);
	obj.write();
	cout<<"Reading data from file"<<endl;
	obj.read();
	return 0;
}
