#include <iostream>
using namespace std;


int main()
{
	int s,n;
	cout<<"Enter the size of array: ";
	cin>>s;
	int arr[s];
	cout<<"Enter the number of times you want to left shift: ";
	cin>>n;
	int dumarr1[n];                                                                                                                                                                                             
	for(int i=0;i<s;i++){
		
		cin>>arr[i];
	}
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	for(int i=n; i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n;i++)
        {
                dumarr1[i]=arr[i];
        }
        for(int i=0;i<n;i++){

                cout<<dumarr1[i]<<" ";
        }




	return 0;
}
