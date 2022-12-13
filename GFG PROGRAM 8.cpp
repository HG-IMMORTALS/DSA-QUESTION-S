#include<iostream>
using namespace std;
int main()
{
	int i;
  for(i=0;i<10;i++)
  {
  	int x,y;
  	cout<<"enter the x and y";
  	cin>>x>>y;
  	if(y==0)
  	{
  	cout<<"invalid"<<"\n";
  	continue;
    }
    cout<<x/y<<""<<"\n";
  }
}

