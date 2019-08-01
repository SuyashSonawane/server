#include<iostream>
using namespace std;

template<class T>
class calc
{
	private:T a,b;	
	public:void get()
		{
			cout<<"\n Enter a  = ";
			cin>>a;
			cout<<"\n Enter b  = ";
			cin>>b;
		}
		T add()
		{
			T ans;
			ans=a+b;
			return ans;		
		}		
};
int main()
{
	calc<int> c1;
	calc<float> c2;
	c1.get();	
	int i;
	i=c1.add();
	cout<<"\n\n Addition is = "<<i;
	return 0;
}
