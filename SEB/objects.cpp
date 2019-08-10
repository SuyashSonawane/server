#include<iostream>

using namespace std;

class number
{
	private:float a,b,ans;
	
	public:number(number &obj);
		number(int x,int y,int z);
		number();
		void show();
};
	
int main()
{
	number n;
	number n1(10,20,30);
	number n2(n1);
	cout<<"\nObject N=\n";
	n.show();
	cout<<"\nObject N1=\n";
	n1.show();
	cout<<"\nObject N2=\n";
	n2.show();
	return 0;
}
number::number(number &obj)
		{
			a=obj.a;
			b=obj.b;		
			ans=obj.ans;
		}
	number::number(int x,int y,int z)
		{
			a=x;
			b=y;
			ans=z;
		}
	number::number()
		{
			a=0;
			b=0;
			ans=0;
		}
	void number::show()
		{
			cout<<"\n  A ="<<a;		
			cout<<"\n  B ="<<b;		
		}		
	

