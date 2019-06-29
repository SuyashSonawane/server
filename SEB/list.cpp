#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
	list<int>::iterator p;
	for(p=lst.begin();p!=lst.end();++p)
		cout<<*p<<" ";
	cout<<"\n\n";
}
int main()
{
	list<int> l1;
	char ch;
	int k;
	list<int>::iterator p;
		
	do
	{
		cout<<"\n\t\tMenu(Max = 5)";
		cout<<"\n\t1.Push";
		cout<<"\n\t2.Pop";
		cout<<"\n\t3.Display";		
		cout<<"\n\tEnter Ur Choice = ";
		cin>>k;
		switch(k)
		{
			case 1:if(l1.size()!=5)
				{
					cout<<"\nEnter Ele to pushed = ";
					cin>>k;
					l1.push_back(k);
					cout<<"\n Element Pushed.";
				}
				else
					cout<<"\nOverflow";
				break;
			case 2:if(l1.size()!=0)
				{
					//k=l1.back();
//					cout<<"\n\t"<<k<<" is Poped";
					p=l1.end();
					cout<<"\n\t"<<*p<<" is Poped";
					l1.pop_back();
				}
				else
					cout<<"\nUnderflow";
				break;
			case 3:if(l1.size()==0)
					cout<<"\n\tEmpty STACK.";
				else
					display(l1);
				break;
			default:cout<<"\nINVALID CHOICE";
		}
		cout<<"\n Enter Y to continue = ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');

	
	/*list2.pop_front();

	cout<<"displaying lists after modification\n";
	cout<<"List 1:: ";
	display(list1);

	cout<<"List 2:: ";
	display(list2);

	// Sizes of list
	int i=0;
	cout<<"Size of list1:: "<<list1.size()<<endl;
		
	cout<<"Size of list2:: "<<list2.size()<<endl;

*/


	return 0;

}
