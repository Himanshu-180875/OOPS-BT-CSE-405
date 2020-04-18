#include<iostream>
using namespace std;
class A
{
protected:
	int roll_no;
public:
	void getroll_no(int x)
	{
		roll_no=x;

	}
	/*void display_rollno()
	{
		cout<<"roll no: "<<roll_no;
	}*/
	
};
 class B: public A
 {
 protected:
 	int SUB1,SUB2;
 public:
 	void getmarks(int x,int y)
 	{
 		SUB1=x;
 		SUB2=y;
    }
 };
 class C:public B
 {
 protected:
 	int total;
 public:
 	void display()
 	{
 		cout<<"rollno: "<<roll_no<<"\n";
 		cout<<"marks in mathematics: "<<SUB1 <<"\n";
 		cout<<"marks in science: "<<SUB2<<"\n";
 		total=SUB1+SUB2;
 		cout<<"total marks: "<<total<<"\n";
 	}
 	
 };
 int main()
 {
 	int x,y,z;
 	C obj;
 	cout<<"enter rollno: ";
 	cin>>x;
 	obj.getroll_no(x);
 	cout<<"enter marks of mathematics and science: ";
 	cin>>y>>z;
 	obj.getmarks(y,z);
 	obj.display();
 	return 0;
 }

