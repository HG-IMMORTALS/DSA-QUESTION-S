#include<iostream>
using namespace std;
bool search(int a[],int s,int key)
{
	for (int i =0;i<s;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
		return 0;
}
int main()
{
	int a[10]={5,7,7-2,10,-2,22,0,5,22,1};
	int key;
	cout<<"enter the key u want to search"<<endl;
	cin>>key;
	bool found=search(a,10,key);
	if(found)
	{
		cout<<"key is present"<<endl;
	}
	else
	{
		cout<<"key is absent"<<endl;
	}
	return 0;
}

