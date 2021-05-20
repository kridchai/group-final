#ifndef thing_h
#define thing_h
#include <iostream>
#include <exception>
using namespace std;

int f;
int k;
class thing{

        
  public:
  
    virtual void something() {
    cout << ".... \n" ;
  }
  void get_thing();
  
};



// Derived class
class Food : public thing {

  public:

    void something() {
    cout << "get Food \n" ;
    f++;
   }
   void eat(){
     if(f>0){
       cout<<"Eating food"<<endl;
       
     }
     else if(f<=0){
       cout<<"Don't have any food"<<endl;
     }
   }
   
};

// Derived class
class weapon : public thing {

  
  public:
    void something() {
    cout << "get weapon \n" ;
     k++;
  }
  void use_thing();
};

void weapon::use_thing(){
  if(k>0){
    cout<<"!!Attack!!"<<endl;
       cout<<"You use your weapon kill zombies"<<endl;
      getchar();
      cout<<"And run away"<<endl;
      getchar();
       cout<<"But it happen an accident"<<endl;
        getchar();
        cout<<"You slip and fall on the stair that make you get caught by zombies"<<endl;
        getchar();
        cout<<"And you are eaten by zombies"<<endl;
  }
  else if(k<=0){
    cout<<"Can't attack ,you doesn't have any weapon"<<endl;
     getchar();
    cout<<"zombies eat you"<<endl;
    
  }


}
void thing::get_thing(){

  int n;
  int i=0;
  do{
  cout<<i+1<<":";
  cin>>n;
  Food myfood;
  weapon myweapon;
  switch(n){
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
  }
   i++;
  }while(i<2);
}
/////////////////////


#endif