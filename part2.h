#include <iostream>
#include <exception>
using namespace std;

class cin_p2:public exception{
  public:
        virtual const char* what() const throw(){
    if(cin.fail()){
      return "\nStupid!!!!!! Not integer\n";
    }  
  }
};

class open{
  private:
    int hp=100,coin=1000;
    string name;
  
  public:
    void get_turn1_go_work();
    void get_turn2_eat_lunch();
    void get_turn3_eat_after_work();
    void get_turn4_go_club();
    void get_turn5_but_go_work();
 
};

  void open::get_turn1_go_work(){
  cin_p2 a1; 
try{    
    int c;
    cout<<"**** What do you want to go to work with? ****"<<endl;
    cout<<"choice     1.Take a bus        2.Walk"<<endl;
    cout<<"Enter your choice: ";
    cin>>c;  //รับค่า

    if(cin.fail())
    throw a1;

    if(c==1){
      cout<<"-15 coin"<<endl;
      coin-=15;
      cout<<"Money in wallet: "<<coin<<endl;
    }
    else if(c==2){
      cout<<"+20 hp"<<endl;
      hp+=20;
      cout<<"Hp do you have: "<<hp<<endl;
    }

    //เลือก choice ไม่ตรง
    while(c>2||c<1){
        cout<<"Enter again(1 or 2): ";
        cin>>c;

        if(cin.fail())
        throw a1;
        
        if(c==1){
        cout<<"-15 coin"<<endl;
        coin-=15;
        cout<<"Money in wallet: "<<coin<<endl;
      }

      else if(c==2){
        cout<<"+20 hp"<<endl;
        hp+=20;
        cout<<"Hp do you have: "<<hp<<endl;
      }

    }
    

  } ///try
  catch(exception &e){
    cout<<e.what(); 
    cout<<"End question..."<<endl;
  }

} 


  void open::get_turn2_eat_lunch(){
  cin_p2 a1; 
try{ 
    int c;
    cout<<"\n**** What menu would you like to eat? ****"<<endl;
    cout<<"choice     1.Ramen      2.Chicken rice"<<endl;
    cout<<"Enter your choice: ";
    cin>>c;  //รับค่า

    if(cin.fail())
    throw a1;

    if(c==1){
      cout<<"-179 coin"<<endl;
      coin-=179;
      cout<<"Money in wallet: "<<coin<<endl;
    }
    else if(c==2){
      cout<<"-40 coin"<<endl;
      coin-=40;
      cout<<"Money in wallet: "<<coin<<endl;
    }

    while(c>2||c<1){
      cout<<"Enter again(1 or 2): ";
        cin>>c;

        if(cin.fail())
        throw a1;

      if(c==1){
        cout<<"-179 coin"<<endl;
        coin-=179;
        cout<<"Money in wallet: "<<coin<<endl;
      }
      else if(c==2){
        cout<<"-40 coin"<<endl;
        coin-=40;
        cout<<"Money in wallet: "<<coin<<endl;
      }
    }

  } ///try
  catch(exception &e){
    cout<<e.what(); 
    cout<<"End question..."<<endl;
  }


}


  void open::get_turn3_eat_after_work(){
 cin_p2 a1; 
try{ 
    int c;
    cout<<"+300 coin Because work done in 1 day.\n";
    coin+=300;
    cout<<"\n**** What menu would you like to eat? ****"<<endl;
    cout<<"choice     1.Shabu      2.Sushi"<<endl;
    cout<<"Enter your choice: ";
    cin>>c;  //รับค่า

    if(cin.fail())
    throw a1;

    if(c==1){
      cout<<"-299 coin"<<endl;
      coin-=299;
      cout<<"Money in wallet: "<<coin<<endl;
    }
    else if(c==2){
      cout<<"-120 coin"<<endl;
      coin-=120;
      cout<<"Money in wallet: "<<coin<<endl;
    }

    while(c>2||c<1){
      cout<<"Enter again(1 or 2): ";
        cin>>c;

        if(cin.fail())
        throw a1;

      if(c==1){
        cout<<"-299 coin"<<endl;
        coin-=299;
        cout<<"Money in wallet: "<<coin<<endl;
      }
      else if(c==2){
        cout<<"-120 coin"<<endl;
        coin-=120;
        cout<<"Money in wallet: "<<coin<<endl;
      }
    }

  }///try
  catch(exception &e){
  cout<<e.what(); 
  cout<<"End question..."<<endl;
}

}


void open::get_turn4_go_club(){

  cout<<"\n**** At the club. ****"<<endl;
  cout<<"You are at risk of infection."<<endl;
  cout<<"You are in close contact with an infected patient."<<endl;
  cout<<"-50 Hp"<<endl;
  hp-=50;
  cout<<"Hp do you have: "<<hp<<endl;
  cout<<"To day I so have fun."<<endl;
  cout<<"Thank you so much."<<endl;
  cout<<"I want to go home and go to bed."<<endl;

}

  void open::get_turn5_but_go_work(){
  cin_p2 a1; 
try{ 
    int c;
    cout<<"\n**** What do you want to go to work with? ****"<<endl;
    cout<<"choice     1.Drive a car        2.Cycling"<<endl;
    cout<<"Enter your choice: ";
    cin>>c;  //รับค่า

    if(cin.fail())
    throw a1;

    if(c==1){
      cout<<"-50 coin"<<endl;
      coin-=50;
      cout<<"Money in wallet: "<<coin<<endl;
    }
    else if(c==2){
      cout<<"+50 hp"<<endl;
      hp+=50;
      cout<<"Hp do you have: "<<hp<<endl;
    }

    //เลือก choice ไม่ตรง
    while(c>2||c<1){
        cout<<"Enter again(1 or 2): ";
        cin>>c;

        if(cin.fail())
        throw a1;
        
        if(c==1){
        cout<<"-50 coin"<<endl;
        coin-=50;
        cout<<"Money in wallet: "<<coin<<endl;
      }

      else if(c==2){
        cout<<"+50 hp"<<endl;
        hp+=50;
        cout<<"Hp do you have: "<<hp<<endl;
      }

    }
  }///try
  catch(exception &e){
  cout<<e.what(); 
  cout<<"End question..."<<endl;
}

}
