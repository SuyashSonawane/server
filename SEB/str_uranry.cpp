#include<iostream>
#include<string.h>
#include <bits/stdc++.h> 

using namespace std;
class String
{
	string str;
	public:
	
	void get()
	{
		cout<<"\nEnter String = ";
		cin>>str;		
	}
	void show()
	{
		cout<<"\nString = "<<str;	
	}
	String operator-()
	{
		String z;
		//z.str=strrev(str);
		reverse(str.begin(),str.end());
		z.str=str;
		reverse(str.begin(),str.end());
		return z;
	}	
};

int main()
{
	String c1,c2;
	c1.get();
	cout<<"\n Original values\n";
	c1.show();
	
	c2=-c1;	
	cout<<"\n After call values\n";
	c2.show();
	return 0;
}


