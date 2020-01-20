#include<iostream>
using namespace std;
class ascii
{
private:
	int a;
public:
	void asciivalue_showdata(char e)
	{
		cout<<"ascii value is"<<" "<<(int) e<<endl;
		a=(int)e;
    }
	void char_showdata()
	{
    	cout<<"char after post-increment is"<<" "<<(char) a; 
	}
	ascii operator++()
	{
		ascii temp;
		temp.a=++a;
		return temp;
	}
};
int main()
{
	char d;
	ascii obj1,obj2;
	cout<<"enter any character"<<" ";
	cin>>d;
	obj1.asciivalue_showdata(d);
	obj2=obj1.operator++();
	obj2.char_showdata();
	return 0;
}
