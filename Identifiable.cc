#include "Identifiable.h"

Identifiable::Identifiable(int& i){
  id = i;
  i++;
}

Identifiable::~Identifiable(){}

int Identifiable::getId(){
  return id;
}
