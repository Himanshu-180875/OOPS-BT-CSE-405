#include<iostream>
using namespace std;
class A
{
private:
	int a,b;
public:
	A(int x,int y)//two parameter constructor
	{
      a=x;
      b=y;
      cout<<"\nvalues from two parameterized constructor are:\n"<<a<<"\n"<<b;
      
	}
	A(int x) // one parameter constructor
	{
		a=x;
		b=0;
		cout<<"\nvalues from one parameterized constructor are:\n"<<a<<"\n"<<b;
	}
	A() //default constructor
	{
		a=-1;
		b=-1;
		cout<<"\nvalues from none parameterized constructor are:\n"<<a<<"\n"<<b;
	}
	A(A &p) //copy constructor
	{
		a=p.a;
		b=p.b;
		cout<<"\nvalues which are copied are:\n"<<a<<"\n"<<b;
	}
};
int main()
{
	A obj(1,2),obj1(3),obj2;
	A obj3=obj;
}