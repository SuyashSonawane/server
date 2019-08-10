#include <iostream> 
#include <fstream> 
using namespace std;
  
int main()
{
	char ch;
	fstream o("student.txt",ios::out);
	cout<<"Enter $ to end";
	ch=getchar();
	while(ch!='$')
	{	ch=ch+20;
		o<<ch;	//o.put(ch);
		ch=getchar();
	}
	
	
	o.close();
}
