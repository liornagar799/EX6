#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "team.hpp"
#include "game.hpp"
#include "Leauge.hpp"

using namespace std;


namespace ariel{

class Schedule {

public:
team a_home[10];
team a[10];
team b_home[10];
team b[10];

Schedule(Leauge l){
for(int i=0; i<10; i++){
a_home[i]=l->the_teams[i];
b[i]=l->the_teams[i];
}
j=0;
for(int j=10; i<20; i++){
a[j]=l->the_teams[i];
b_home[j]=l->the_teams[i];
j++;
}

}

};

}
