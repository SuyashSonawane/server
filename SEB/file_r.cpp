#include <iostream> 
#include <fstream> 
using namespace std;
  
int main()
{
	int age;
	char name;
	ifstream o("student1.txt");
	for(int i=0;i<5;i++)
	{
		o>>age;
		cout<<"\n Student no "<<i+1<<" age = "<<age;
		cout<<"\n";
	}	

	
	o.close();
}
