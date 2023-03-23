#include "Customer.h"
#include "defs.h"
#include <iostream>

int Customer::nextId = CUSTOMER_IDS;

Customer::Customer(string n) : Identifiable(nextId), animals(true){
  name = n;
}
Customer::~Customer(){

}

void Customer::addAnimal(Animal* a){
  a->setParent(this);
  animals.add(a);
}

int Customer::getCompValue(){
  return animals.getSize();
}

void Customer::print(){
  cout<<endl;
  cout<<getId()<<" "<<name<<"\n";
  if(animals.getSize() > 0){
    cout<<"-----PETS:"<<endl;
    animals.print();
  }
  else{
    cout<<"-----PETS: NONE"<<endl;
  }
  cout<<endl;
}

string Customer::getName(){
  return name;
}
