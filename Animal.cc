#include "Animal.h"
#include "defs.h"
#include "Customer.h"
#include <iostream>
#include <cstddef>
#include <iomanip>

int Animal::nextId = ANIMAL_IDS;

Animal::Animal(SpeciesType s, string n, string g, int y, int m) : Identifiable(nextId){
  name = n;
  gender = g;
  age = (y * 12) + m;
  species = s;
  parent = NULL;
}

Animal::~Animal(){}

void Animal::setParent(Customer* c){
  parent = c;
}

int Animal::getCompValue(){
  return age;
}

void Animal::print(){
  string type;
  if(species == C_DOG){
    type = "Dog";
  }
  else if(species == C_CAT){
    type = "Cat";
  }
  else{
    type = "Other";
  }
  cout<<getId()<<": "<<setiosflags(ios::left)<<setw(12)<<name<<" : "<<setw(5)<<type<<": Age: "<<setw(2)<<age/12<<" yrs, "<<age%12<<" mths: Parent: ";
  if(parent != NULL){
    cout<<parent->getName()<<endl;
  }
  else{
    cout<<"NONE"<<endl;
  }
}
