#include <iostream>
using namespace std;

//static function
void Static( )
{
  static int  a = 0;;;
  cout<<a++<<" ";
}

//Regular Function
void Regular( )
{
  int  a ;;;
  cout<<a++<<" ";
}
int main()
{
 cout<<"Output from Static Function "<<endl;
 for( int i = 0; i < 4; i++ ) 
 {
   Static();
 }
 cout<<"\nOutput from Regular Function "<<endl;
 for( int i = 0; i < 4; i++ ) 
 {
   Regular();
 }
 
 cout<<"\nTherefore the conclusion is "
 <<"Static variable automatically gets \n"
 <<"initialized to value 0 and available \n "
 <<"Through the scooe of whole program "<<endl;
 
 cout<<"Whereas in Regular declaration \n"
 <<"If initially value is not assigned to 0 \n"
 <<" It will contain garbage value "<<endl;

  
}
