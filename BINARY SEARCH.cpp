 #include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
		{
		     start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	int even[6]={2,4,6,8,12,18};
	int odd[5]={1,3,5,7,9};
//	int index=0;
	
	int evenindex=binarysearch(even,6,12);
	cout<<"index of 12 is "<<evenindex<<endl;
	int oddindex=binarysearch(odd,6,5);
	cout<<"index of 5 is "<<oddindex<<endl;
	
  return 0;
}

