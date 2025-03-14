#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter Size : ";
	cin>>n;
	string str="";
	

	char arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
        {       
                str=str+arr[i];
        }  

	cout<<str;

	return 0;
}

