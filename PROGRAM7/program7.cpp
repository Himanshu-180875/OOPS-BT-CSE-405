#include<iostream>
using namespace std;
#include<ctime>
class TIME
{
private:
	int hr,min;
public:
    TIME()
    {
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
   hr= local_time->tm_hour;
    min= local_time->tm_min ;

    }
    void settime()
    {
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
    int  m= 15+local_time->tm_min ;
    int n=m/60;
    hr= n+local_time->tm_hour;
    min=m%60;
	}

    void showdata()
    {
    	cout<<hr<<":"<<min;
    }

    friend void add(TIME,TIME);
};

   void add(TIME x,TIME y)
   {
   	 int m;
   	 m=x.min+y.min;
     cout<<"\naddition of hours and minutes:\n";
     cout<<"Total hours:";
     int k= x.hr+y.hr;
     int n=m/60;
     int o= n+k;
     cout<<o;
     cout<<" mins:";
     int l=m%60;
     cout<<l;
   }

int main()
{

    cout<<"current system time is:\n";
	TIME obj;
	obj.showdata();
    cout<<"\nsystem time after 15 minutes is:\n";
	TIME obj1;
	obj1.settime();
	obj1.showdata();
	add(obj,obj1);
	return 0;
}
