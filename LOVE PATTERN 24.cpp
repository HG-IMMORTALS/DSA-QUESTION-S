#include<iostream>
using namespace std;
int main()
{
	int n;
	
	int i=1;
	int num=1;
	cin>>n;
	while(i<=n)
	{
		int space=1;
		while(space<=n-i)
		{
			cout<<"  ";
			space++;
		}
		int j=1;
		while(j<=i)
		{
			cout<<num<< " ";
			num++;
			j++;
		}
			i++;
		cout<<endl;
	}
return 0;
}

