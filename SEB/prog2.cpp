
#include <iostream> 
using namespace std; 

class Test1 { 
public: 
Test1() { cout << "Constructing an Object of Test1" << endl; } 
~Test1() { cout << "Destructing an Object of Test1" << endl; } 
}; 

class Test2:public Test1 { 
public: 
 
Test2() { cout << "Constructing an Object of Test2" << endl; 
			throw 20; 
	} 
~Test2() { cout << "Destructing an Object of Test2" << endl; } 
}; 

int main() { Test1 t;
try { 
	Test2 t2; // Constructed and destructed 
	Test1 t3;
	
} catch(int i) { 
	cout << "Caught " << i << endl; 
} 
cout<<"\n End of program";
} 

