#include<iostream>
using namespace std;
int main()
{
  int n;
  int i=1;
  cout<<"enter the value"<<"\n";
  cin>>n;
  while(i<=n)
  {
  	 int j=1;
    while (j<=n)
	  {
  		cout<<"*";
  		j++;
	  }
	  cout<<endl;
	  i++;
  }
}

