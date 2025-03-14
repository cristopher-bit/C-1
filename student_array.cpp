#include <iostream>
using namespace std;


void display(int student[], int n){
	for(int i=0;i<n;i++)
	{
		cout<<"Roll no. of student "<<i+1<<" is: "<<student[i]<<endl;

	}
}

int main()
{
	int n;
	cout<<"Enter the size of of array: ";
	cin>>n;
	int student[n];
	for(int i=0;i<n;i++)
	{
		cin>>student[i];
	}
	display(student,n);
	return 0;
}
