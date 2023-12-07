#include <iostream>
#include "profile.hpp"

int main() {

Profile donda("Don Dada", 26, "Madrid", "Spain", "he/him");
donda.add_hobby("Coding");
donda.add_hobby("Football");
std::cout << donda.view_profile() ;
  

}