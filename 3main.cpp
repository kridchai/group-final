#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<ctime>
#include "rolevirus.cpp"
#include "bst.h"
#include "swap.h"
#include "myex.h"
#include "rolehuman.cpp"
using namespace std;
int ip2,ip3;
string name;
my_cin e1;
string turn2l(){
  int bomb;
  cout<<"1) fight           2) escape\n";
   getchar();
try{
  do{
   cout<<"choose your choice\n";
  cin>>ip2;
  if(cin.fail())
    throw e1;
  if(ip2 == 1)
    {
      cout<<setw(40);
      cout<<"Dont touch the bomb!!\n";
      fflush(stdin);
      cout<<setw(15)<<"1"<<setw(15)<<"2"<<"                  3\n what is the safe choice\n";
      cin>>bomb;
       if(cin.fail())
          throw e1;
      switch(bomb){
        case 1:cout<<"that is the bomb!!\n BOOOOOOOOOOOOOM\n";return "dead";
        case 2:cout<<"that is the bomb!!\n BOOOOOOOOOOOOOM\n";return "dead";
        case 3:cout<<"congratulation\n";return "survive";
        default:return "dead";
      }
      
    }
    
  else if(ip2==2){
    return "escape";
  }
    
  else
    cout<<"invalid choice!!\n"; 
  }while(ip2>2||ip2<1);
}
catch(exception &e){
  cout<<e.what(); return "dead";
}
}

string turn2r(){
  int random,rps;
  srand(time(NULL));
  random=rand()%3;
  ezvirus v1("default");
  mdvirus v2("default");
  switch(random){
    case 0:cout<<"I am "<<v1.getType()<<endl;break;
    case 1:cout<<"I am "<<v2.getType()<<endl;break;
    case 2:hvirus v3("defalt");cout<<"I am "<<v3.getType()<<endl;break;
  }
  cout<<"you can kill me by win this game\n";
  getchar();
  cout<<setw(20)<<"this game is rock paper scissor 1 round only\n";
   getchar();
  cout<<"1) play dark game           2) escape\n";
  try{ 
  do{
   cout<<"choose your choice\n";
  cin>>ip2;
  if(cin.fail())
    throw e1;
  if(ip2 == 1)
    {
      cout<<setw(40);
      cout<<"Rock Paper Scissor!!\n";
      fflush(stdin);
      cout<<setw(10)<<"0"<<setw(10)<<"1"<<"              2           3\n 0 = rock   1 = paper   2 = scissor   3 = ไม่บอกอยากรู้กดเองดิ\n";
      cin>>rps;
      if(cin.fail())
          throw e1;
      cout<<"ศัตรูออกค้อน\n";
       getchar();
      switch(rps){
        case 0:cout<<"เสมอแต่ตายซะ\n";return "dead";
        case 2:cout<<"แพ้มุแง";return "dead";
        case 1:cout<<"congratulation\n";return "survive";
        case 3:return "ss";return "ss";
        default:return "dead";
       
      }
      
    }
    
  else if(ip2==2){
    return "escape";
  }
    
  else
    cout<<"invalid choice!!\n"; 
  }while(ip2>2||ip2<1);
  }
  catch(exception &e){
    cout<<e.what();return "dead";
  }
}


int Part3(string n) {
  int ip1;
  string status;
  name = n;
  /*cout<<"fill your name\n";
  cin>>name;
  if(cin.fail())
    throw "wrong type";
    */

    jjsSorcerer j(name);
  
  std::cout <<"I awaken along the night \nwhere is this?\noh I just infect covid-19\n";
   getchar();
  cout<<"1) keep lay down\n2) go outside\n";
  try{
  
  do{
   cout<<"choose your choice\n";
  cin>>ip1;
   if(cin.fail())
    throw "wrong type";
  if(ip1 == 1)
    {
      cout<<name<<":Is that a doctor?\n";
       getchar();
      cout<<"Yes I am a doctor I need to kill you now!\n";
       getchar();
      status = turn2l();
      if(status=="dead")
      {
        cout<<setw(20)<<"we lost\n";
        return 0;
      }
      else if(status=="escape"){
        j.setHp(j.getHp()-20);
        cout<<"your hp is "<<j.getHp()<<"\n";
        if(j.isDead())
        {
          cout<<setw(20)<<"we lost\n";
          return 0 ;
        }
      }
    }
    
  else if(ip1==2)
    {
       cout<<"what is this\n";
        getchar();
       status = turn2r();
        if(status=="dead")
      {
        cout<<setw(20)<<"we lost\n";
        return 0;
      }
      else if(status=="escape"){
        j.setHp(j.getHp()-20);
        cout<<"your hp is "<<j.getHp()<<"\n";
        if(j.isDead())
        {
          cout<<setw(20)<<"we lost\n";
          return 0 ;
        }
      }
      else if(status=="ss")
      {
        j.ss();
      }

    }
   
  else
    cout<<"invalid choice!!\n"; 
  }while(ip1>2||ip1<1);
cout<<name<<" :what i am doing here\n";
 getchar();
cout<<"?: welcome to dark game again "<<name<<endl;
 getchar();
cout<<name<<":กกกก แกต้องการอะไรน่ะ\n";
 getchar();
cout<<"?: ฉันก็แค่ต้องการเล่นสนุกกับนายเฉยๆ "<<name<<endl;
 getchar();
cout<<setw(20)<<"Guess the number";
 getchar();
cout<<"rule\n1)มีเลขอยู่10ตัว ระหว่าง0-99ให้เดาให้ถูกตัวเดียวจากโอกาสทั้งหมด3ครั้ง";
 getchar();
 BST b;int ran;
   b.rootPtr = NULL; // tree initially empty39
int list[10];
for ( int i =0; i < 10; i++ ) { 
       ran = rand()%100;
      insertNode( &b,ran );
      list[i] = ran;
   }
cout<<setw(20)<<"Game Start\n";
int ans;
int f = 0;
for(int i=0;i<3;i++)
{
  cin>>ans;
   if(cin.fail())
    throw "wrong type";
  if(ans==101){
    j.ss();
    cout<<" congratulation you pass this mission\n";
    f  =1;
    break;
  }
  else if(find(&b,ans)==1)
  {
    f=1;
    cout<<" congratulation you pass this mission\n";
    break;
  }
  else cout<<"you have "<<2-i<<"chance\n";
}
if(f==0)
{
  cout<<"you lost";puts( "\nเฉลย :\n" );
   preOrder( b.rootPtr );return 0;
}
puts( "\nเฉลย :\n" );
 preOrder( b.rootPtr );
 cout<<endl;
cout<<"อีกไม่กี่อึดใจเดียวคุณก็จะรอดชีวิตแล้วอดทนไว้!!\n";
 getchar();
cout<<"last mission ให้เรียงเลขจาก10ตัวที่แล้วจากน้อยไปมาก ยากใช่ไหมล่ะ หึ\n";

int min,posmin;
for(int i =0;i<9;i++)
{
  min = list[i];
  posmin = i;
  for(int j = i;j<10;j++)
  {
    if(min>list[j])
    {
      min = list[j];
      posmin = j;
    }
  }
  swap(list[i],list[posmin]);
}

/*for(int i =0;i<10;i++)
{
  cout<<list[i]<<"\n";
}*/

for(int i =0;i<10;i++)
{
  cout<<"c["<<i<<"] : ";
  cin>>ans;
   if(cin.fail())
    throw "wrong type";
  if(list[i]!=ans)
  {
    cout<<"you lost\n";
    return 0 ;
  }
}
cout<<setw(20)<<"Congratulation you Survive!!!\n";
 getchar();
cout<<"where is this\n";
 getchar();
cout<<"นี่เราฝันไปหรือเนี่ย บ้าจริง\n";
 getchar();
cout<<"end\n";
deleteNode(b.rootPtr);
}
catch(const char *c){
  cout<<c<<endl;
}
return 0 ;

}