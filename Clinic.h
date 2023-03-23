/*
 purpose: Represents a vetinary clinic that has customers and patients
*/
#ifndef CLINIC_H
#define CLINIC_H
#include "Customer.h"
#include "Animal.h"
#include "IdList.h"
#include "IdArray.h"
using namespace std;
#include <string>

class Clinic
{
  public:
    Clinic(string="Unknown");
    ~Clinic();
    void add(Customer*);
    void add(Animal*);
    bool addToCustomer(Customer*, int);
    void print();
    void printCustomers();
    void printAnimals();

  private:
    string name;
    IdList animals;
    IdArray customers;
};

#endif
