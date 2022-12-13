#include<numeric>
#include<iostream>
using namespace std;
int main()
{
int arr []={19,20,30,4};
int n=sizeof(arr)/sizeof(arr[0]);
int s=0;
s=accumulate(arr,arr+n,s);
cout<<s;
}

