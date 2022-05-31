#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>


using namespace std;


namespace ariel{

class team{

public:
string name;
int talent;
int how_mach;

team(){
 this->name="";
 this->talent=0;
 this->how_mach=0;

}

team(string name1,int t){
 this->name= name1;
 this->talent=t;
 this->how_mach=0;
    
}


};


}