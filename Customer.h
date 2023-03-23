/*
 purpose: Represents a customer of a clinic
*/
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include "Animal.h"
#include "Identifiable.h"
#include "IdList.h"
using namespace std;

class Customer : public Identifiable
{
  public:
    Customer(string="Unknown");
    ~Customer();
    void addAnimal(Animal*);
    virtual int getCompValue();
    virtual void print();
    string getName();


  private:
    IdList animals;
    static int nextId;
    string name;
};

#endif
