#include<iostream>
using namespace std;
class num2;
class num1
{
	private: int x;
	public:void get1()
		{
			cout<<"\n Enter x=";
			cin>>x;
		}
		void put1()
		{
			cout<<"\n  =  "<<x;
		}
	friend void add(num1 i,num2 j);
};
class num2
{
	private: int y;
	public:void get2()
		{
			cout<<"\n Enter y=";
			cin>>y;
		}
		void put2()
		{
			cout<<"\n  =  "<<y;
		}
	friend void add(num1 i,num2 j);
};
	void add(num1 i,num2 j)
	{
		int k;
		k=i.x+j.y;
		cout<<"\n Addition ="<<k;
	}	

int main()
{
	num1 n1;
	num2 n2;
	
	n1.get1();
	n2.get2();
	add(n1,n2);

	return 0;
}
