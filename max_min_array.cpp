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
	cout<<endl;
	cout<<"Maximum: "<<arr[n-1]<<endl;
	cout<<"Minimun: "<<arr[0]<<endl;
	cout<<"2nd Maximum: "<<arr[n-2]<<endl;
	cout<<"2nd Minmum: "<<arr[1]<<endl;

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
      
