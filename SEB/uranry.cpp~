#include<iostream>
#include<string.h>

using namespace std;
class complex
{
	int r,i;
	public:
	complex(){i=r=0;}
	void get()
	{
		cout<<"\nEnter Real = ";
		cin>>r;
		cout<<"\nEnter imag = ";
		cin>>i;
	}
	void show()
	{
		
		cout<<"\n "<<r<<"+"<<i<<"i\n";
	}
	complex operator-()
	{
		complex z;
		z.r=-r;
		z.i=-i;
		return z;
	}	
};

int main()
{
	complex c1,c2;
	c1.get();
	cout<<"\n Original values\n";
	c1.show();
	
	c2=-c1;	
	cout<<"\n After call values\n";
	c2.show();
	return 0;
}


