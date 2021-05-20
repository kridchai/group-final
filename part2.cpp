#include <iostream>
#include <iomanip>
#include "part2.h"
#include "human.h"


int Part2(string n) {
  open n1,n2;
  string name;
  name = n;

  cout<<name<<": Ahhhhhhhhh~~~~~~~~"<<endl;.
  getchar();
  cout<<name<<": WHAT!! I just have nightmare"<<endl;
  getchar();
  cout << "Today I\'m going to work!!!\n\n";
  getchar();

  n1.get_turn1_go_work();

  cout<<"\nArrive at work"<<endl;
  getchar();
  cout<<"Let\'s start work in the morning!!!"<<endl;
  getchar();
  cout<<"Keep working until noon."<<endl;
  getchar();
  cout<<name<<": I\'m so hungry. Friends are you going to have lunch with me."<<endl;
  getchar();
  cout<<"Friends: Yes, I\'m hungry too."<<endl;
  getchar();

  n1.get_turn2_eat_lunch();
  
  cout<<"\nBack to work in afternoon."<<endl;
  getchar();
  cout<<"start work in afternoon."<<endl;
  getchar();
  cout<<"Working until evening."<<endl;
  getchar();
  cout<<"Get off work."<<endl;
  getchar();
  cout<<"Friends: Let\'s go get something to eat?"<<endl;
  getchar();
  cout<<"Okay. Let\'s go."<<endl;
  getchar();

  n1.get_turn3_eat_after_work();

  cout<<"Friends: Let\'s go to the club place?"<<endl;
  getchar();
  cout<<"Me: Okay. Let\'s go."<<endl;
  getchar();

  n1.get_turn4_go_club();

  cout<<"\n------- New day -------"<<endl;
  getchar();
  cout<<"To day I feels bad."<<endl;
  getchar();
  cout<<"But I must go work today."<<endl;
  getchar();

  n1.get_turn5_but_go_work();

  cout<<"\nArrive at work"<<endl;
  getchar();
  cout<<"Let\'s start work in the morning!!!"<<endl;
  getchar();
  cout<<"Keep working until noon."<<endl;
  getchar();
  cout<<"Me: I\'m so hungry. Friends are you going to have lunch with me."<<endl;
  getchar();
  cout<<"Friends: Yes, I\'m hungry too."<<endl;
  getchar();

  n1.get_turn2_eat_lunch();

  cout<<"\nBack to work in afternoon."<<endl;
  getchar();
  cout<<"Now I'm feeling really down."<<endl;
  getchar();
  cout<<"I will call my boss."<<endl;
  getchar();
  cout<<"\n--------------------- In calling ---------------------"<<endl;
  cout<<"Me: Now I want to go to the hospital to have COVID checked."<<endl;
  cout<<"Boss: Ok, You can go to the hospital right away."<<endl;
  cout<<"Thank you boss."<<endl;
  cout<<"---------------------  End calling ---------------------\n"<<endl;
  getchar();
  
  cout<<"Arrive at hospital"<<endl;
  getchar();
  cout<<"Nurse: You need to go to the infectious examination room on the 1st floor, room 1101."<<endl;
  getchar();
  cout<<"Me: Okay. Thank you."<<endl;
  getchar();
  cout<<"\n--- After 2 hours ---"<<endl;
  getchar();
  cout<<"The results come out that you are addicted COVID-19."<<endl;
  getchar();
  cout<<"Me: Seeing the results, I fainted."<<endl;
  getchar();

  return 0;
}