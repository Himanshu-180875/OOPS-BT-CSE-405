#include<iostream>
using namespace std;
class point
{
	private:
		int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
				
			}
			void showdata()
			{
				cout<<"value of a is "<<a<<"\nvalue of b is "<<b;
			}
			point operator+(point obj2)
			{
				point temp;
				temp.a=a+obj2.a;
				temp.b=b+obj2.b;
				return temp;
			}
};
int main()
{
	point obj1,obj2,obj3;
	obj1.setdata(3,5);
	obj2.setdata(2,7);
	obj3=obj1+obj2;
	obj3.showdata();
	
}
