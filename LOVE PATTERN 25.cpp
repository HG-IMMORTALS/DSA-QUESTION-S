#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cin>>n;
	int count =n*n;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<count<<" ";
			count--;
			j++;
		}
		cout<<endl;
		i++;
	}
}

