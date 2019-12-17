#include<iostream>
#include<string.h>

using namespace std;
class stud
{
	private:int roll;
		float per;
		static int count;		//declaration of static var
		
	public:stud()
		{			
			cout<<"\n Object Created  =";
		}	
		~stud()
		{
			cout<<"\n Object destroyed  =";
		}	
	
};

int main()
{
	stud n1,n3;
		{
			stud n2,n4;
			{	
				stud n5,n6;
			}
		}
	return 0;
}


