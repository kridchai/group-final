#include <iostream>
using namespace std;
class virus{
  string name;
  int hp;
  int atk;
  public:
        virus(string,int,int);
        virtual ~virus();
        bool isDead();
        void setHp(int );
        int getHp();
        virtual string getType();
  
};


virus::virus(string name,int hp,int atk){
          this->name = name;
          this->hp = hp;
          this->atk = atk;
        }
virus:: ~virus(){
         
        }
        

bool virus::isDead(){
          if(hp==0){
            return true;
          }
          else return false;
        }

void virus::setHp(int h){
            hp = h;
        }
int virus::getHp(){
          return hp;
        }
string virus::getType(){
  return "Normal Virus";
}
  



