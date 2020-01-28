#include<iostream>
using namespace std;
class Name
{
private:
	string firstname;
	string middlename;
	string lastname;
public:
   Name(string f, string m, string l)
{
    firstname=f;
    middlename=m;
    lastname=l;
}
void showdata()
{
	cout<<"\nfirst name is:\n"<<firstname;
	cout<<"\nmiddle name is\n"<<middlename;
	cout<<"\nlastname is:\n"<<lastname;
}
Name(Name &p)
{
	firstname=p.firstname;
	middlename=p.middlename;
	lastname=p.lastname;	
}
};
int main()
{
	Name obj("ramesh","kumar","singh");
	obj.showdata();
	Name obj1=obj;
	obj1.showdata();	
}
