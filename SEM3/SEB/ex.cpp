#include<iostream>
using namespace std;

int main()
{	
	int b=2;
	try				
	{
		if(b==1)
			throw(5);	
		else if(b==2)
			throw('x');	
		else if(b==3)
			throw(3.5);	
		else if(b==4)
			throw(2.5f);	
		cout<<"\n End of try block;";
	}
	catch(int x)		
	{			
		cout<<"\n int exception ";
	}
	catch(char x)		
	{			
		cout<<"\n Char exception ";
	}
	catch(float x)		
	{			
		cout<<"\n float exception ";
	}
	catch(double x)		
	{			
		cout<<"\n double exception ";
	}
	cout<<"\n End of program\n";
	return 0;
}
