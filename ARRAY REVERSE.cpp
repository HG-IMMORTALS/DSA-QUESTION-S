#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
	int start =0;
	int end=n-1;
	while(start<=end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int a[4]={2,7,5,9};
	int b[5]={3,8,6,9,0};
	cout<<"reverse the given array"<<endl;
	reverse(a,4);
	reverse(b,5);
	printarray(a,4);
	printarray(b,5);
return 0;
}

