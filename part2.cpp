#include <iostream>
#include <iomanip>
#include "part2.h"


int Part2() {
  open n1,n2;

  cout << "Today I\'m going to work!!!\n\n";

  n1.get_turn1_go_work();

  cout<<"\nArrive at work"<<endl;
  cout<<"Let\'s start work in the morning!!!"<<endl;
  cout<<"Keep working until noon."<<endl;
  cout<<"Me: I\'m so hungry. Friends are you going to have lunch with me."<<endl;
  cout<<"Friends: Yes, I\'m hungry too."<<endl;

  n1.get_turn2_eat_lunch();
  
  cout<<"\nBack to work in afternoon."<<endl;
  cout<<"start work in afternoon."<<endl;
  cout<<"Working until evening."<<endl;
  cout<<"Get off work."<<endl;
  cout<<"Friends: Let\'s go get something to eat?"<<endl;
  cout<<"Okay. Let\'s go."<<endl;

  n1.get_turn3_eat_after_work();

  cout<<"Friends: Let\'s go to the club place?"<<endl;
  cout<<"Me: Okay. Let\'s go."<<endl;

  n1.get_turn4_go_club();

  cout<<"\n------- New day -------"<<endl;
  cout<<"To day I feels bad."<<endl;
  cout<<"But I must go work today."<<endl;

  n1.get_turn5_but_go_work();

  cout<<"\nArrive at work"<<endl;
  cout<<"Let\'s start work in the morning!!!"<<endl;
  cout<<"Keep working until noon."<<endl;
  cout<<"Me: I\'m so hungry. Friends are you going to have lunch with me."<<endl;
  cout<<"Friends: Yes, I\'m hungry too."<<endl;

  n1.get_turn2_eat_lunch();

  cout<<"\nBack to work in afternoon."<<endl;
  cout<<"Now I'm feeling really down."<<endl;
  cout<<"I will call my boss."<<endl;
  cout<<"\n--------------------- In calling ---------------------"<<endl;
  cout<<"Me: Now I want to go to the hospital to have COVID checked."<<endl;
  cout<<"Boss: Ok, You can go to the hospital right away."<<endl;
  cout<<"Thank you boss."<<endl;
  cout<<"---------------------  End calling ---------------------\n"<<endl;
  
  cout<<"Arrive at hospital"<<endl;
  cout<<"Nurse: You need to go to the infectious examination room on the 1st floor, room 1101."<<endl;
  cout<<"Me: Okay. Thank you."<<endl;
  cout<<"\n--- After 2 hours ---"<<endl;
  cout<<"The results come out that you are addicted COVID-19."<<endl;
  cout<<"Me: Seeing the results, I fainted."<<endl;

  return 0;
}