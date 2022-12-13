#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		char ch='A'+n-i;
		while(j<=i)
		{
			cout<<ch;
		 	ch++;
		    cout<<"\t";
		    j++;
		}
		cout<<endl;
		i++;
	}

}

