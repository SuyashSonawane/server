#include <iostream> 
#include <fstream> 
using namespace std;
  
int main()
{
	int i,age;
	ofstream o("student.txt");
	
	for(i=0;i<5;i++)
	{
		cout<<"\n Enter student no "<<i+1<<" age";
		cin>>age;
		o<<age;o<<"\n";
	}
	o.close();
}
