#include<iostream>
using namespace std;

double power(double,int=2);
void display(double);



int main()
{
	int p,e;
	double n,r;
	cout << "Enter number : ";
	cin >> n;
	cout << "Enter exponent : ";
	cin >> e;
	r = power(n,e);
	display(r);
    r= power(n);
	display(r);
	
	return 0;
}

double power(double a, int b)
{
	double x = 1;
	for(int i = 1; i <= b; i++)
		x = x * a;
	return x;
}
void display(double r)
{

	  cout <<"Result is"<<r<<endl;
  //cout <<"Result without passing the exponent value is"<<r;	
	
}
