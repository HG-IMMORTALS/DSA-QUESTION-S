#include<bits/stdc++.h>
using namespace std;
int main()
{  
int arr[]={10,20,100,40,50,500,80};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"array: ";
for(int i=1;i<n;i++)
cout << arr[i] << " ";
cout<<"\n"<<*max_element(arr, arr+n);
 return 0;
}


