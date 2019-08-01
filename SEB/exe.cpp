#include<iostream>
using namespace std;

class A
{
	private:int age;
		float income;
		char city[15],vehicle;
	public:
		void get()
		{
			//try
		//	{
				cout<<"Enter age"<<endl;
				cin>>age;
				if(age>=18&&age<=55)
					throw(age);
				cout<<"Enter income"<<endl;
				cin>>income;
				cout<<"Enter city"<<endl;
				cin>>city;
				cout<<"Do you own a car?  (y/n)"<<endl;
				cin>>vehicle;
				if(vehicle=='Y'||vehicle=='y')
					throw(vehicle);
				cout<<"\nEligible";
		//	}
			
		}

		};
int main()
{
	A a1;
	try
	{
		a1.get();
	}
	catch(int a)
	{
		cout<<"\n Not eligible: age";
	}
	catch(char a)
	{
		cout<<"\n Not eligible: Car";
	}
	return 0;
}
