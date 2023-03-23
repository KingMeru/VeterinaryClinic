#include <iostream>
using namespace std;
#include <string>

#include "IdArray.h"


IdArray::IdArray(bool b, int s) : Collection(b){
  capacity = s;
  allId = new Identifiable*[capacity];
  size = 0;
}

IdArray::~IdArray(){
  for(int i = 0; i < size; i++){
    delete allId[i];
  }
  delete [] allId;
}

void IdArray::print(){
  for(int i = 0; i < size; ++i){
    allId[i]->print();
  }
}

bool IdArray::add(Identifiable* obj){
  if(size == capacity){
    return false;
  }
  if(size == 0){
    allId[0] = obj;
    size++;
    return true;
  }

  if(asc){
    if(allId[size -1]->getCompValue() <= obj->getCompValue()){
      allId[size] = obj;
      size++;
      return true;
    }
    for(int i = 0; i < size; ++i){
      if(allId[i]->getCompValue() >= obj->getCompValue()){
        int x = i;
        for(int j = size; j > i; --j){
          allId[j-0] = allId[j-1];
        }
        allId[x] = obj;
        size++;
        return true;
      }
    }
  }
  else{
    if(allId[size -1]->getCompValue() >= obj->getCompValue()){
      allId[size] = obj;
      size++;
      return true;
    }
    for(int i = 0; i < size; ++i){
      if(allId[i]->getCompValue() <= obj->getCompValue()){
        int x = i;
        for(int j = size; j > i; --j){
          allId[j-0] = allId[j-1];
        }
        allId[x] = obj;
        size++;
        return true;
      }
    }
  }
  return false;
}

bool IdArray::find(int id, Identifiable** foundObj){
  for(int i = 0; i < size; ++i){
    if(allId[i]->getId() == id){
      *foundObj = allId[i];
      return true;
    }
  }
  return false;
}
