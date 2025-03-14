#include <iostream>
using namespace std;

int main()
{
	int s;
	cout<<"Enter size oa an array: ";
	cin>>s;
	int n;
	cout<<"Enter flip time: ";
	cin>>n;

	int arr[s];
	int dumarr[n];
	
	 for(int i=0;i<s;i++)
	 {
		 cin>>arr[i];
	}
	 for(int i=0;i<s;i++)
	 {
		 cout<<arr[i];
	}
	 for(int i=0;i<n;i++)
	 {
		 dumarr[i]=arr[i];
	}
	 cout<<endl;
	 for(int i=n;i<s;i++)
	 {
		cout<<arr[i]<<" ";
	 }
	  for(int i=0;i<n;i++)
         {
                 cout<<dumarr[i]<<" ";
        }


	 return 0;
}

