#include <iostream> 
#include <fstream> 
using namespace std;
  
int main()
{
	char c;
	int count=0;
	fstream o("student.txt",ios::in);
	while(!o.eof())		//while(o)	//while(o.eof()==0)
	{
		c=o.get();	/*o>>c;*/	
		c=c-20;
		cout<<c;
	}
	
	o.close();
}
