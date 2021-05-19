#include "virus.cpp"
class ezvirus:public virus{
public:
      ezvirus(string = "ezvirus",int = 100,int = 100);
      ~ezvirus();
      string getType();
};


class mdvirus:public virus{
public:
      mdvirus(string = "mdvirus",int = 200,int = 200);
      string getType();
      ~mdvirus();

};


class hvirus:public virus{
public:
      hvirus(string = "hvirus",int = 300,int = 300);
      string getType();
      ~hvirus();

};

ezvirus::ezvirus(string n,int x,int y):virus(n,x,y){
}
string ezvirus::getType(){
  return "ezvirus";
}
ezvirus::~ezvirus(){

}


mdvirus::mdvirus(string n,int x,int y):virus(n,x,y){
 
}
string mdvirus::getType(){
  return "mdvirus";
}

mdvirus::~mdvirus(){
  
}


hvirus::hvirus(string n,int x,int y):virus(n,x,y){

}

string hvirus::getType(){
  return "hvirus";
}
hvirus::~hvirus(){
}

