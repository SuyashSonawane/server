#include<iostream>
#include<string.h>

using namespace std;

class stud
{
	private:int roll;
		float per;		
	
	public:void get()
	{
		cout<<"\n Enter Roll  =";
		cin>>roll;		
		cout<<"\n Enter Per  =";
		cin>>per;			
	}
	void show()
	{
		cout<<"\n Roll  ="<<roll;		
		cout<<"\n Per  ="<<per;			
	}
};
	
int main()
{
	stud n[5];
	
	n[2].show();
	return 0;
}


