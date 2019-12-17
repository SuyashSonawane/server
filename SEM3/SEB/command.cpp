#include<iostream>
#include<fstream>
using namespace std;

/*
		$> ./read ex.cpp
*/
int main(int argc,char* argv[])
{
	int i=0;
	char ch;
	ifstream f;
	f.open(argv[1]);
	if(argc==2)
	{	
		while(f)
		{
			ch=f.get();
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			i++;			
		}
		cout<<"\n counter = "<<i<<"\n";
	}
	f.close();
	return 0;
}
