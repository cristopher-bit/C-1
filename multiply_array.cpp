#include <iostream>
using namespace std;

void multi_array(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]*2;
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
		 cin>>arr[i];
	}
	 multi_array(arr,n);
	 return 0;
	
}
