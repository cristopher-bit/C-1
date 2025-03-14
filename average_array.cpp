#include <iostream>
using namespace std;

void average_no(int arr[], int n)
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	double avg=sum/n;
	cout<<"Average of the array is: "<<avg<<endl;
}


int main()
{
	int n;
	cout<<"Enter numbers: ";
	cin>>n;
 	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	average_no(arr,n);
	return 0;
}
