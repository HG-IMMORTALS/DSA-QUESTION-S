#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cin>>n;
	while(i<=n)
	{
		int j=n;
		while(j>=i)
		{
			cout<<"*";
			j--; 
		}
		cout<<endl;
		i++;
	}
}

