#ifndef human_h
#define human_h

#include <iostream>
#include "thing.h"
using namespace std;
class human{
  public:
  string name;
  int hp;
  int atk;
  void get_name();
  void survive();
  human(string,int,int);
};

human::human(string n,int h=3,int a){
   name=n;
   hp=h;
   atk=a;
}
void human::get_name(){
  
  cout<<"What is your name ? : ";
   cin>>name;
   cin>>atk;

   human(name,hp,atk);
 };

void human::survive(){
  thing t;
  cout<<endl;
  int way1;
  cout<<"------Are you ready ?------"<<endl; 
  cout<<"-----Can you survive ?-----"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"!!!!!!! LET'S START !!!!!!!"<<endl;
  cout<<"name:"<<name<<"  HP:"<<hp<<endl;
  getchar();
  cout<<endl;
  cout<<endl;
  

  cout<<name<<": OOOWWWwwwww~~ (yawn)"<<endl;
  getchar();
  cout<<name<<": What time is it?"<<endl;
  getchar();
  cout<<name<<" look at the clock"<<endl;
  getchar();
  cout<<name<<": It so early"<<endl;
  getchar();
  cout<<"Open TV"<<endl;
  cout<<" ____________________________________________"<<endl;
  cout<<"|                                            |"<<endl;
  cout<<"|  Breaking New!!                            |"<<endl;
  cout<<"|    Now In The World we found a new         |"<<endl;
  cout<<"|    COVID-19 from a outer space that        |"<<endl;
  cout<<"|    spread around the world in 1 day        |"<<endl;
  cout<<"|    and you will die in 3 day after infect  |"<<endl;
  cout<<"|____________________________________________|"<<endl;
  cout<<endl;
  getchar();
  cout<<name<<": What going on?"<<endl;
  getchar();
  cout<<"You have to choose "<<endl;
  cout<<"1.Go out side  2.Stay in your room"<<endl;
  cin>>way1;
  if(way1==1){
    cout<<"Then "<<name<<" go out side"<<endl;
  cout<<"What way you to go ?"<<endl;
  cout<<"1.Left     2.Right"<<endl;
  cin>>way1;
    if(way1==1){
      cout<<"walk to the left"<<endl;
      getchar();
      cout<<"Suddenly!! Infected person stand in front of you"<<endl;
      getchar();
      cout<<"Then he sneeze at you"<<endl;

    }
    else if(way1==2){
      cout<<"Walk to the right"<<endl;
      getchar();
      cout<<"Go down stair"<<endl;
      getchar();
      cout<<"See many people infected and act like zombies"<<endl;
      getchar();
      cout<<"What you want to do ?"<<endl;
      cout<<"1. Run away to your room"<<endl;
      cout<<"2. Go to 7-eleven and get some food"<<endl;
      cin>>way1;
      if(way1==1){
        cout<<name<<": What the f**k"<<endl;
        getchar();
        cout<<name<<": What happen to this world"<<endl;
        getchar();
        cout<<name<<": I have to go to my room !NOW!"<<endl;
        getchar();
        cout<<"Run very quickly"<<endl;
        getchar();
      }
      else if(way1==2){
        cout<<name<<": I have to get some food or things that can help survive"<<endl;
        cout<<"What you want to pick ? (can pick only 2 things)"<<endl;
        cout<<"1.bread 2.cutter 3.water 4.scissor"<<endl;
        
        t.get_thing();

      }

    }
  }
  else if(way1==2){
    cout<<name<<": I very scared"<<endl;
    getchar();
    cout<<name<<": I will not go outside"<<endl;
    getchar();
  }

}
#endif
