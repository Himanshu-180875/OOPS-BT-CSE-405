#include<iostream>
using namespace std;
class A{
protected:
	int roll_no;
public:
	void get_data(int x)
	{
		roll_no=x;
	}
};
class B: public A
{
protected:
	int sub1,sub2;
public:
	void set_data(int y,int z)
	{
		sub1=y;
		sub2=z;
	}
	
};
class C
{
protected:
	int sub3;
public:
	void set_sub3(int x)
	{
		sub3=x;
	}
};
class D: public C, public B
{
protected:
	int total;
public:
	
	void display()
	{
		total=sub1+sub2+sub3;
		cout<<"roll_no is: "<<roll_no<<"\n";
		cout<<"marks in mathematics: "<<sub1<<"\n";
		cout<<"marksin science: "<<sub2<<"\n";
		cout<<"marks in hindi: "<<sub3<<"\n";
		cout<<"total marks: "<<total;
	}
	
};
int main()
{
	int x,y,z,r;
	D obj;
	cout<<"enter your roll_no: ";
	cin>>r;
	obj.get_data(r);
	cout<<"enter marks of mathematics & science: ";
	cin>>y>>z>>x;
	obj.set_data(y,z);
	obj.set_sub3(x);
	obj.display();
	return 0;

}