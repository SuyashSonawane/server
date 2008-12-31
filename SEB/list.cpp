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
	list<int> list1;
	list<int> list2(5);
	list2.push_front(100);
	list2.push_back(200);
	list2.push_front(11);
	list2.push_back(22);

	cout<<"List 2:: ";
	display(list2);

	// ADD 2 elements to list1

	// Remove element from list2
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
