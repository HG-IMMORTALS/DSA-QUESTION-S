#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
    }
	cout<<endl;
}

int swap(int arr[],int s)
{
	for(int i=0;i<s;i+=2)
	{
		if(i+1<s)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}

int main()
{
	int even[6]={5,2,9,4,7,6};
	int odd[7]={43,67,8,4,1,4,99};
	
	swap(even,6);
	printarray(even,6);
	
	return 0;
}

