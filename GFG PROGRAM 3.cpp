#include<iostream>
using namespace std;
int main()
{
	char gender;
	int age ;
	cout<<"Enter the gender 'M' and 'F' ";
	cin>>gender;
	cout<<"enter the age ";
	cin>>age;
	if(gender=='M')
	{
	 cout<<"Male";
	  if(age<18)
	  
	    cout<<"kid";
	  else
	    cout<<"adult";
    }
	else
	{
	  cout<<"female";
      if(age<18)
        cout<<"kid";
      else
        cout<<"adult";
    }
}
