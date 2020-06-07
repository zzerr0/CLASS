//program for anonymous class

// a anonymous class is a class which has no name

/*

These classes cannot have a constructor but can have a destructor.

These classes can neither be passed as arguments to functions 

nor can be used as return values from functions

*/

#include<iostream>

using namespace std;

//Anonymous Class 

class 

{

  int i;

  public :

    void setvalueforI(int i)

    {

      this->i=i;

    }

    

    void coutI()

    {

      cout<<"This is anonymous class "<<endl;

      cout<<"Cout the value of I is "<<i<<endl;

    }

} obj;

int main()

{

  obj.setvalueforI(100);

  obj.coutI();

  

  return 0;

}
