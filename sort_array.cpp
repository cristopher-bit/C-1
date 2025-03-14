#include<iostream>
using namespace std;


void sort_arr(int arr[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			int temp= arr[j];
			arr[j]= arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }

}

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort_arr(arr,n);	
	return 0;  
}
