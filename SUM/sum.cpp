#include<iostream>
using namespace std;
class Sum{

private:
	int a,b;
public:
	Sum(int x,int y)
	{
		a=x;
		b=y;
	}
	int sum()
	{
		int c;
		c=a+b;
		return c;
	}
	void display(int c)
	{
		cout<<"sum of two numbers is: "<<c;
	}
};
 int main()
 {
 	int num1,num2;
 	cout<<"enter two numbers: \n";
 	cin>>num1>>num2;
 	Sum obj(num1,num2);
 	int c=obj.sum();
 	obj.display(c);
 	return 0;
 }