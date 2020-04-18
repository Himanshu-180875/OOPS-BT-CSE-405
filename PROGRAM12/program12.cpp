#include<iostream>
using namespace std;
class A{
protected:
	int m;
public:

	void getdata(int x)
	{
		m=x;
	}
};
class B
{
protected:
	int n;
public:
	void setdata(int y)
	{
		n=y;
	}
};
class C: public A,public B
{
public:
	void display()
	{
		cout<<"value of m is: "<<m<<"\n";
		cout<<"value of n is: "<<n<<"\n";
		cout<<"value of m*n is: "<<m*n;
	}
	
};
int main()
{
    C obj;
    obj.getdata(6);
    obj.setdata(7);
    obj.display();
	return 0;
}