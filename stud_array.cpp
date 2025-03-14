#include <iostream>
using namespace std;

struct student
{
	int roll_no;
	char name[30];
};

void Accept(student *const ss)
{
	cout<<"Enter Student Details ->"<<endl;
	cout<<"Name: ";
	cin>>ss->name;
	cout<<endl;
	cout<<"Roll No: ";
	cin>>ss->roll_no;
}

void Display(const student *const ss)
{
	cout<<"Name: "<<ss->name<<endl;
	cout<<"Roll No: "<<ss->roll_no<<endl;
}

int main()
{
	int n;
	cout<<"Enter the Number of Students: ";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++)
	{

		Accept(&s[i]);
	}
	for(int i=0;i<n;i++)
	{
		Display(&s[i]);
	}
	return 0;
}



