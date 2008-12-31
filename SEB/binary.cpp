#include<iostream>
#include<list>

using namespace std;

class addunit{
	public:
	int s,c;
	addunit(){
		s = 0;
		c = 0;
	}
};

void display(list<int> &lst)
{
	list<int>::iterator p;
	for(p=lst.begin();p!=lst.end();++p)
		cout<<*p<<" ";
	cout<<"\n\n";
}

addunit sum(int p , int q ,int r){
	int ds = p + q + r;
	addunit ret;
	switch(ds){
		case 0:ret.s = 0;ret.c = 0;
			break;
		case 1:ret.s = 1;ret.c = 0;
			break;
		case 2:ret.s = 0;ret.c = 1;
			break;
		case 3:ret.s = 1;ret.c = 1;
			break;
	}
	return ret;
}

int main()
{
	int m,n;

	cout<<"\nEnter Length of 1st No: ";
	cin>>m;
	cout<<"\nEnter Length of 2nd No: ";
	cin>>n;
	int max =  m > n ? m : n;
	int min =  m > n ? m : n;
	cout<<max;
	list<int> l1(m),l2(m),l3;

	cout<<"first: ";
	for(int i =0 ; i < m; i++){
		int y;
		cin>>y;
		l1.push_back(y);
	}
	cout<<"Second: ";
	for(int i =0 ; i < n; i++){
		int y;
		cin>>y;
		l2.push_back(y);
	}

	int c,a,b;
	addunit ax;
	c = 0;
	for(int i =0 ; i < max; i++){
		a = l1.back();
		l1.pop_back();
		b = l2.back();
		l2.pop_back();
		c = ax.c;
		ax = sum(a,b,c);
		l3.push_back(ax.s);
	}
	display(l3);
	return 0;

}
