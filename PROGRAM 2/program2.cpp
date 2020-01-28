#include<iostream>
using namespace std;
class Square
{
private:
	int a,b;
public:
	void setdata(int x)
	{
		a=x;
	}
	inline int square()
	{
		b=a*a;
		return b;
	}
	void showdata()
	{
		cout<<"\nsquare of number is:\n"<<b;
	}	
};
int main()
{
	int x;
	Square obj;
	cout<<"enter a number:\n";
	cin>>x;
	obj.setdata(x);
	obj.square();
	obj.showdata();
	return 0;
}