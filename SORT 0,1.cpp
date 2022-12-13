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
void sort(int arr[],int n)
{
	int left=0;
	int j=n-1;
	int step=1;
	while(left<j)
	{
		cout<<"STEP "<<step++<<endl;
		printarray(arr,8);
		cout<<endl;
		while(arr[left]==0)
		{
		left++;
		}
		while(arr[j]==1)
		{
			j--;
		}
		if(arr[left]==1&&arr[j]==0)
		{
		swap(arr[left],arr[j]);
		left++;
		j--;
	    }
	}
	cout<<"returned array"<<endl;;
	printarray(arr,8);
}
int main()
{
	int arr[8]={1,1,1,1,0,0,0,0};
	sort(arr,8);
	cout<<"Sorting is done! Thank u"<<" "<<endl;
	printarray(arr,8);

	return 0;
}

