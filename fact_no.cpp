#include <iostream>
using namespace std;

int factorial_no(int n)
{

	if(n==1)
	{
		return n;
	}
	return n*factorial_no(n-1);
}


int main()
{
	int n;
	cout<<"Enter the Number: ";
	cin>>n;

	int fact=factorial_no(n);
	cout<<"Factorial of a number is: "<<fact<<endl;
	return 0;
}
