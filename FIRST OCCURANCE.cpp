 #include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
         	ans=mid;
			end=mid-1;
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
	return ans;
}
int main()
{
	int odd[5]={1,3,5,5,9};

	int oddindex=binarysearch(odd,6,5);
	cout<<"index of 5 is "<<oddindex<<endl;
	
  return 0;
}

