#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int ans=0;
    int i=0;
    if(n<0)
    {
    	n=pow(2,16)+n;
	}
	cout<<n<<endl;
    while(n)
    {
    	int digit =n&1;
    	ans=(pow(10,i)*digit)+ans;
    	n=n>>1;
    	i++;
    	cout<<ans<<endl;
	}
    cout<<"Answer is "<<ans<<endl;
}

