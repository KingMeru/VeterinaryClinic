#include "Clinic.h"
#include <iostream>

Clinic::Clinic(string n) : animals(false), customers(false){
  name = n;
}

Clinic::~Clinic(){
  animals.cleanupData();
}

void Clinic::add(Customer* c){
  customers.add(c);
}

void Clinic::add(Animal* a){
  animals.add(a);
}

bool Clinic::addToCustomer(Customer* c, int animalId){
  Identifiable* p;

  if(animals.find(animalId, &p)){
    Animal* d = dynamic_cast<Animal*>(p);
    c->addAnimal(d);
    return true;
  }
  cout<<"ERROR: NO ANIMAL MATCHING ID "<<animalId<<" WAS FOUND"<<endl;
  return false;

}
void Clinic::print(){
  cout<<endl;
  cout<<"DATA FOR "<<name<<":"<<"\n";
  printAnimals();
  printCustomers();

}

void Clinic::printCustomers(){
  cout<<endl;
  cout<<"CUSTOMERS:"<<endl;
  customers.print();
}
void Clinic::printAnimals(){
  cout<<endl;
  cout<<"ANIMALS:"<<endl;
  cout<<endl;
  animals.print();
}
