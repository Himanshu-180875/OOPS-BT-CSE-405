#include<iostream>
using namespace std;
class Odd_even
{
private:
	int num;
	public:
		Odd_even(int x)
		{
			num=x;
		}
		void display()
		{
			if(num%2==0)
			{
				cout<<"even number" ; 
			}
			else
				cout<<"odd number";
		}
		
};
int main()
{
	int x;
	cout<<"enter a number: ";
	cin>>x;
	Odd_even obj(x);
	obj.display();
	return 0;
}