#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Rectangle{
  protected:
   int width, height;
  public:
    void read_input()
    {
        cin>>width>>height;
    }
    void display()
    {
    cout<<width<<" "<<height<<"\n";
    } 
};

class RectangleArea : public Rectangle{
  public:
      void display()
    {
      cout<<width * height<<endl;
    }
};


int main()
{
  RectangleArea obj;
 
  obj.read_input();
  
  obj.Rectangle::display();
  obj.display();
  
  return 0;
}
