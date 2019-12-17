#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class stud
{
	private:int roll;
		float per;		
			
	public:void get()
		{
		cout<<"\n Enter Roll  = ";cin>>roll;		
		cout<<"\nEnter Per  =";cin>>per;		
		}
	
	void show()
	{
		cout<<"\n Roll  ="<<roll;		
		cout<<"\n Per  ="<<per;				
	}
	int get_roll(){return roll;}
};
	
int main()
{
	stud n1;
	int n,i,r,ch;
	int flag=0;
	char choice;
	fstream f;
	f.open("Stud.txt",ios::out|ios::in);
	do{
		cout<<"\n\n MENU";
		cout<<"\n1.Create";
		cout<<"\n2.Display";
		cout<<"\n3.Search";
		cout<<"\n4.update";
		cout<<"\n5.Add";		
		cout<<"\n6.exit";

		cout<<"\nEnter ur Choice = ";	
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n Enter no of studs= ";
				cin>>n;
				for(i=0;i<n;i++)
				{
					n1.get();
					f.write((char*)&n1,sizeof(stud));
				}
				break;
			case 2:f.seekg(0,ios::beg);
				while(1)
				{		
					f.read((char*)&n1,sizeof(stud));
					if(f.eof()!=0)
						break;
					n1.show();
				}
				break;
			case 3:flag=0;
				f.seekg(0,ios::beg);
				cout<<"\n Enter Roll no to be searched = ";
				cin>>r;
				for(i=0;i<n;i++)
				{		
					f.read((char*)&n1,sizeof(stud));
					if(n1.get_roll()==r)
					{
						n1.show();
						flag=1;
					}		
				}
				if(flag==0)
					cout<<"\n NO RECORD";
				break;
			case 4:
				f.seekg(0,ios::beg);
				cout<<"\n Enter Roll no to be searched = ";
				cin>>r;
				for(i=0;i<n;i++)
				{		
					f.read((char*)&n1,sizeof(stud));
					if(n1.get_roll()==r)
					{
						n1.get();
						f.seekp(sizeof(stud)*i,ios::beg);
						f.write((char*)&n1,sizeof(stud));
					}		
				}
				break;
			case 5: f.open("Stud.txt", ios::app|ios::out);
				f.seekp(0,ios::end);
				n1.get();
				f.write((char*)&n1,sizeof(stud));
				n++;				
				break;
			
		}
	cout<<"\n Do you want to continue = ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');
	f.close();
	
	return 0;
}


