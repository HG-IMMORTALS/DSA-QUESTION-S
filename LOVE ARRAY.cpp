#include<iostream>
using namespace std;
void printarray(int a[],int size);
{
	cout<<"printing the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"printing done"<<endl;
	}
}
int main()
{
	int a[15],size;
	printarray(a[],size)
	cout<<"value at 10 index "<<a[10]<<endl;
	cout<<endl<<"everthing is fine"<<endl<<endl;;
	return 0;
}

