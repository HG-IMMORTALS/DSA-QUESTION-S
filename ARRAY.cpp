#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int sum=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
  cout<<"the sum of array is "<<sum<<endl;
return 0;
}


