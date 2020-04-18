#include<iostream>
using namespace std;
class Student{
private:
	int roll_no;
public:
	Student(int x)
	{
		roll_no=x;
	}
	void display()
	{
		cout<<"student roll_no is: "<<roll_no<<"\n";
	}
	Student()
	{
		roll_no=12;
	}

	
};
class Student_marks
{
private:
	int sub1,sub2,sub3,total;
	Student obj;
public:
	Student_marks(int x,int y, int z,int w)
	{
		sub1=x;
		sub2=y;
		sub3=z;
		obj=Student(w);
	}
	void display()
	{
		obj.display();
		total=sub1+sub2+sub3;
		cout<<"marks in sub1: "<<sub1<<"\n";
		cout<<"marks in sub2: "<<sub2<<"\n";
		cout<<"marks in sub3: "<<sub3<<"\n";
		cout<<"total marks: "<<total<<"\n";
}
	
};
int main()
{
	int x,y,z,w;
	cout<<"default constructor: \n";
	Student e1;
	e1.display();
	cout<<"----------------\n";
	cout<<"enter your roll_no: ";
	cin>>w;
	cout<<"enter marks of three subjects: ";
	cin>>x>>y>>z;
	Student_marks e2(x,y,z,w);
	e2.display();
	return 0;
}