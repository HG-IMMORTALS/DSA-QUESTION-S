#include<iostream>
using namespace std;
int power(int a,int n)
{
	int ans=1;
	for(int i=0;i<=n;i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main()
{
	int a,n;
	cin>>a>>n;
	int ans=power(a,n);
	cout<<ans;
	return 0;
}

