#include<iostream>
using namespace std;
int main()
{
  int n;
  int i=1;
  int count=1;
  cin>>n;
  while(i<=n)
  {
  	int j=1;
  	while(j<=n)
  	{
  		cout<<count; 
  		 cout<<"\t";
  		count=count+1;
  		j++;
	}

	cout<<endl;
	i++;
  }
}

