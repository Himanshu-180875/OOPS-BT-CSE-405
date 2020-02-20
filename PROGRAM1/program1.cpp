#include<iostream>
using namespace std;
class MATRIX
{
private:
	int row,coloumn, *p,d;
public:
     MATRIX(int row, int coloumn)
	{
         p= new int[row*coloumn];
	}
    
    void setdata(int row, int coloumn)
    {
        
    	cout<<"enter the elements of array";
		for(int i=0; i<row; i++)
		{
			for (int j = 0; j< coloumn; ++j)
			{
			
			cin>>d;
			*(p+i+j)=d;
		}

	}
    }
    void showmatrix(int row,int coloumn)
    {

    	cout<<"Matrix is :\n";
		for(int i=0;i<row;i++)
		{
			for (int j = 0; j < coloumn; ++j)
			{
				cout<<*(p+i+j)<<"\t";
			}
			cout<<"\n";
		}

	}
    };
	

int main()
	{
		int x,y;
		cout<<"enter the no. of rows of array";
		cin>>x;
		cout<<"enter the no. of cols of array";
		cin>>y;
		MATRIX obj(x,y);
        obj.setdata(x,y);
		obj.showmatrix(x,y);
		return 0;
}