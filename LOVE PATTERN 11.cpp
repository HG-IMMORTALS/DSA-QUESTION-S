#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cin>>n;
	while(i<=n)
	{  
		int count=1;
		int j=1;
		while(j<=n)
		{
			char ch='A'+i+j-2; 
			cout<<ch;
			cout<<"\t";
			j++;
		}
		cout<<endl;
		i++;
	}
}

