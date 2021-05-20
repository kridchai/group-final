#ifndef myex_h
#define myex_h

#include <iostream>
#include <exception>
using namespace std;

class my_cin:public exception{
  public:
        virtual const char* what() const throw(){
    if(cin.fail()){
      return "โง่หลายก็ตายซะ\n";
    }  
}
};
#endif
