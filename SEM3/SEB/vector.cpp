#include<iostream>
using namespace std;

template<class T,class S>
class vector
{
	private:T a[10];
		int n;	
	public:void get()
		{
			cout<<"\n Enter no of mag  = ";
			cin>>n;
			cout<<"\n Enter values  = ";
			for(int i=0;i<n;i++)
				cin>>a[i];
		}
		void show()
		{
			cout<<"\n Vector is = {";
			for(int i=0;i<n;i++)
				cout<<a[i]<<",";
			cout<<"\b}\n";
		}	
		void mul_scalar()
		{
			S k;
			cout<<"\n Enter Scalar value  = ";
			cin>>k;
			for(int i=0;i<n;i++)
				a[i]=a[i]*k;
		}	
		void modify()
		{
			T temp,value;
			//if(choice==1)
			{
				cout<<"\n Enter value to be replaced = ";
				cin>>temp;
				cout<<"\n Enter new value = ";
				cin>>value;
				for(int i=0;i<n;i++)
					if(a[i]==temp)
					{
						a[i]=value;
						break;
					}
			}
		}
};
int main()
{
	vector<int,int> c1;
	vector<float,int> c2;
	c1.get();	
	c1.show();
	c1.mul_scalar();
	c1.show();
	return 0;
}





