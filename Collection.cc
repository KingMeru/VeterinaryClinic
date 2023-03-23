#include "Collection.h"

Collection::Collection(bool n){
  setAsc(n);
}

Collection::~Collection(){}

void Collection::setAsc(bool n){
  asc = n;
}
