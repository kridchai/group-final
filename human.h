#ifndef human_h
#define human_h

#include <iostream>
#include "thing.cpp"
using namespace std;
class human{
  public:
  string name;
  int hp;
  int atTack;
  void get_name(string n);
  void survive();
  void survive2();
  bool isDead();
  void setAtk(int );
  int getAtk();
  human(string,int = 100,int = 0);
  void setHp(int h);
  int getHp();
  virtual ~human();
};
human::human(string n,int h,int a){
   name=n;
   hp=h;
   atTack=a;
}
void human::get_name(string n){
  int atk;
  cout<<"Get attack: ";
   cin>>atk;
   name = n;
  atTack = atk;
   hp = 100;
  
 }

void human::setHp(int h){
            hp = h;
        }
int human::getHp(){
          return hp;
        }
human:: ~human(){
        
        }




bool human::isDead(){
          if(hp==0){
            return true;
          }
          else return false;
    }
void human::setAtk(int x){
  atTack = x;
}

int human::getAtk(){
  return atTack;
}

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
  
  //day1
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
  cout<<"1)Go out side  2)Stay in your room"<<endl;
  cin>>way1;
  if(way1==1){
    cout<<"Then you go out side"<<endl;
  cout<<"What way you to go ?"<<endl;
  cout<<"1)Left     2)Right"<<endl;
  cin>>way1;
    if(way1==1){
      cout<<"walk to the left"<<endl;
      getchar();
      cout<<"Suddenly!! Infected person stand in front of you"<<endl;
      getchar();
      cout<<"Then he sneeze at you"<<endl;
      getchar();
      cout<<"you are infected COVID-19"<<endl;
      getchar();
      cout<<name<<": Arghhhhhhh!! "<<endl;
      getchar();
      cout<<"Then you run back to your room"<<endl;
      cout<<"And you faint in your room"<<endl;
      //same
    }
    else if(way1==2){
      cout<<"Walk to the right"<<endl;
      getchar();
      cout<<"Go down stair"<<endl;
      getchar();
      cout<<"See many people infected and act like zombies"<<endl;
      getchar();
      cout<<"What you want to do ?"<<endl;
      cout<<"1) Run away to your room"<<endl;
      cout<<"2) Go to 7-eleven and get some food"<<endl;
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
        cout<<"When you in your room"<<endl;
      }
      else if(way1==2){
        cout<<name<<": I have to get some food or things that can help survive"<<endl;
        cout<<"What you want to pick ? (can pick only 2 things)"<<endl;
        cout<<"1) bread \n2) cutter \n3) water \n4) scissor\n"<<endl;
        t.get_thing();
        cout<<"When you already get item "<<endl;
        getchar();
        cout<<"Run back to your room very quickly"<<endl;
        getchar();
        cout<<"Enter the room"<<endl;
        getchar();
        cout<<"What you want to do next?"<<endl;
        cout<<"1)eat food \n 2)sleep"<<endl;
        cin>>way1;
        if (way1==1){
          Food food;
          food.eat();
        }
        cout<<"Sleep ZZzzz \n\n\n"<<endl;
      }

    }
  }
  else if(way1==2){
    cout<<name<<": I very scared"<<endl;
    getchar();
    cout<<name<<": I will not go outside"<<endl;
    getchar();
    cout<<"Then you look down from window "<<endl;
    getchar();
    cout<<name<<": What is that!!!!"<<endl;
    getchar();
    cout<<name<<": That is zombies!!"<<endl;
    getchar();
    cout<<"Then you shock and faint"<<endl;
    
  //same
  }
}






   //day2 
void human::survive2(){
  //thing k;
  weapon t;
  //t.k=k;
  int way2;
   cout<<name<<": How long I sleep"<<endl;
   getchar();
   cout<<name<<": I have to get out off here"<<endl;
   getchar();
   cout<<name<<": and find a safety place"<<endl;
   getchar();
   cout<<"Open the door"<<endl;
   getchar();
   cout<<"COVID zombies stay front of your room"<<endl;
     cout<<"Do you want to go out ?"<<endl;
  cout<<"1)YES     2)NO"<<endl;
  cin>>way2;
    if(way2==1){
      cout<<"Do you want to use weapon?"<<endl;
      cout<<"1)YES     2)NO"<<endl;
      cin>>way2;
      if(way2==1){
      t.use_thing();
   
      }
      else if(way2==2){
        cout<<"zombie attack you"<<endl;
         getchar();
        cout<<"and you die"<<endl;
      }
      
    }
    else{
      cout<<name<<"I have to find the another way"<<endl;
       getchar();
       cout<<"You close the door"<<endl;
       getchar();
       cout<<"What do you want to do next?"<<endl;
       cout<<"1)Climb out the window"<<endl;
        cout<<"2)Wait in your room"<<endl;
         cin>>way2;
        if(way2==1){
          cout<<name<<": I have to escape through the window"<<endl;
           getchar();
          cout<<"Climb out the window"<<endl;
           getchar();
          cout<<"But! Suddenly accident is happen"<<endl;
           getchar();
          cout<<"Then you fall on the ground"<<endl;
          getchar();
          cout<<"And die finally"<<endl;
        }
        else if(way2==2){
          cout<<"zombie break the door"<<endl;
           getchar();
          cout<<"and zombie come to eat you"<<endl;
      }
    }
}


#endif
