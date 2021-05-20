#include <iostream>
#include "thing.cpp"
#include <string.h>
using namespace std;
class LL{
      thing*hol;
      int size;
public:
       void add_thing(thing*&);
       void show_all();
       void free_t(thing*&);
      
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
             t->show_thing();
	      t=t->move_next();    
     }
}
void LL::add_thing(thing *&A){

          hol->insert(A);
          hol=A;

       size++;

 }



 

 void LL::free_t(thing*& A){
   thing *t = hol,*previous = NULL;
   if(hol==A)
   {
     hol = hol->move_next();
     delete(t);
     size--;
   }
   else{
       while(t!=NULL)
   {
     previous = t;
     t = t->move_next();
     if(t==A&&t->move_next()==NULL)
     {
       delete(t);
       size--;
       previous->setNext(NULL);
     }
     else if(t==A&&t->move_next()!=NULL)
     {
       thing *f = t->move_next();
       delete(t);
       size--;
       previous->setNext(f);
     }

   }
  }
  
 }

 