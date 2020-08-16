#include <iostream>

using namespace std;

class A
{    
	 public:
	       int a;
       	A()
         {
    	  cout << "Constructor Created" << endl;
    	   a = 4;
      	}
        ~A()
          {
    	   cout << "Destructor Called" << endl;
          }
};

int main()
{
	A* a = new A();
	delete a; // Delete array
	return 0;
}
