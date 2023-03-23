/*
 purpose: Connects the view to the logic of the program
*/
#ifndef CONTROL_H
#define CONTROL_H
#include "Clinic.h"
#include "View.h"

class Control
{
  public:
    Control(string="Unknown");
    ~Control();
    void launch();
  private:
    void initCustomers(Clinic*);
    void initAnimals(Clinic*);
    Clinic* clinic;
    View v;
};

#endif
