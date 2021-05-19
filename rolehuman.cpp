#include <iostream>
#include "human.h"
using namespace std;
class jjsSorcerer:public human{
public:
      jjsSorcerer(string,int = 200,int = 200);
      ~jjsSorcerer();
      void ss();
};


class standUser:public human{
      standUser(string,int = 250,int = 250);
      ~standUser();
      void ss();
};

jjsSorcerer::jjsSorcerer(string n,int x,int y):human(n,x,y){

}
jjsSorcerer::~jjsSorcerer(){
 
}
void jjsSorcerer::ss(){
  setAtk(getAtk()+200);
  cout<<"ryoiki tenkai activate(ท่าไม้ตายของคุณได้ถูกปลุกขึ้นมาแล้ว ขขขแข็งแกร่งชะมัด)\nชนะแบบไร้เงื่อนไข\n ";
}

standUser::standUser(string n,int x,int y):human(n,x,y){

}
standUser::~standUser(){

}
void standUser::ss(){
  setAtk(getAtk()+10);
  cout<<"Zawarudo activate\nชนะแบบไร้เงื่อนไข\n ";
}

