//#ifndef thing_h
//#define thing_h
#include <iostream>
using namespace std;

class thing{
  public:
    void something() {
    cout << "The animal makes a sound \n" ;
  }
  void get_thing();
};
// Derived class
class Food : public thing {
  public:
    void something() {
    cout << "get Food \n" ;
   }
};

// Derived class
class weapon : public thing {
  public:
    void something() {
    cout << "get weapon \n" ;
  }
};
void thing::get_thing(){
  int things[2];
  int i=0;
  do{
  cout<<i+1<<":";
  cin>>things[i];
  Food myfood;
  weapon myweapon;
  switch(things[i]){
    case 1:
    myfood.something();
    break;
    case 2:
    myweapon.something();
    break;
    case 3:
    myfood.something();
    break;    
    case 4:
    myweapon.something();
    break;
    //default:
    
  }
   i++;
  }while(i<2);
}
/////////////////////


//#endif