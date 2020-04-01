#include<iostream>
using namespace std;
class greatest
{

private:
	int number1,number2,number3;
public:
	greatest(int a,int b,int c)

	{
		number1=a;
		number2=b;
		number3=c;

	}

	int greater()
	{
		if(number1>number2 && number1>number3)
			return number1;
			else if(number2>number1 && number2>number3) 
				return number2;
			else
				return number3;
	}
	void display(int a)
	{
		cout<<"greater number is : "<<a;

	}
};
int main()
{
	int a,b,c;
	cout<<"Enter three numbers: \n";
	cin>>a;
	cin>>b;
	cin>>c;
	greatest obj(a,b,c);
	int result=obj.greater();
	obj.display(result);
	return 0;
}