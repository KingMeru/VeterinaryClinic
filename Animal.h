/*
 purpose: Represents animals that are patients in a clinic
*/
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
#include "defs.h"
#include "Identifiable.h"
#include <string>
class Customer;


class Animal : public Identifiable {

  public:
    Animal(SpeciesType, string, string, int, int);
    ~Animal();
    void setParent(Customer*);
    virtual int getCompValue();
    virtual void print();


  private:
    static int nextId;
    string name;
    string gender;
    int age;
    SpeciesType species;
    Customer* parent;
};

#endif
