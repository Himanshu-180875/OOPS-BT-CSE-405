#include<iostream>
using namespace std;
class Array{
private:
	int array[20];
public:
	void read(int l)
	{
		for(int i=0;i<l;i++)
		{
			cin>>array[i];
		}
		
	}
	void display(int l)
	{
			cout<<"array is:\n";
			for(int i=0;i<l;i++)
			cout <<array[i]<<"\n";
		}
	};
  int main()
  {
  	int a[20],l;
  	cout<<"enter the length of array: ";
  	cin>>l;
  	cout<<"enter the elements of matrix: \n";
  	Array obj;
  	obj.read(l);
  	obj.display(l);
  	return 0;
  }
