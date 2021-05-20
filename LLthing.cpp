#include <iostream>
#include "thing.cpp"
using namespace std;
class LL{
      thing*hol;
      int size;
public:
       void add_thing(thing*&);
       void show_all();
       ~LL();
       LL();
      
};


LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	thing *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     thing* t=hol;
     int i;
     for(i=0;i<size;i++){
             t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(thing *&A){

          hol->insert(A);
          hol=A;

       size++;

 }