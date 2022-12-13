#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
    }cout<<endl;
}

int swap(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		if(i+1<s)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
int main()
{
	int even[6]={1,4,7,3,8,2};
	int odd[7]={43,67,8,4,1,4,99};
	
	swap(even,6);
	printarray(even,6);
	
}

