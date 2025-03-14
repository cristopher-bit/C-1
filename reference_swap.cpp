#include <iostream>
using namespace std;

void swap_no(int *a, int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	//cout<<"a: "<<a<<"b: "<<b<<endl;
}

int main()
{
	int a,b;
	cin>>a>>b;
	        cout<<"a: "<<a<<"b: "<<b<<endl;
	swap_no(&a,&b);
	cout<<"a: "<<a<<"b: "<<b<<endl;
	return 0;
}
