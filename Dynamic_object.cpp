
#include<iostream>
using namespace std;
class Human
{
  public: 
   string name;
   int age;    
  Human()
  {
    name = "Shivam";
    age = 4;
  }
};

int main()
{
  //Human obj;
  //dynamically creating the object
  
  Human *obj = new Human();
  cout<<obj->name<<endl;
  cout<<obj->age<<endl;
  cout<<"Sizeof "<<sizeof(obj->age);
  delete obj;
  return 0;
  
}
