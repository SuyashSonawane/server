#include<iostream>
using namespace std;

class complex
{
	private:int real,imag;
	
	public: friend istream & operator>>(istream &,complex &);
		friend ostream & operator<<(ostream &,complex &);		
};
ostream & operator<<(ostream &jobhihai,complex &obj)
{
	jobhihai<<"\n\n Equation is = "<<obj.real<<"+"<<obj.imag<<"i\n";
	return jobhihai;
}
istream & operator>>(istream &ladu,complex &obj)
{
			cout<<"\n Enter real part = ";
			ladu>>obj.real;
			cout<<"\n Enter imag part = ";
			ladu>>obj.imag;
			return ladu;
}
int main()
{
	complex c1;		
	cin>>c1;		//c1.get();
	cout<<c1;		//c1.put();
	return 0;
}
