/*
  Purpose:  This program manages the animal and customer data for a veterinary clinic.
            The end user will be able to print all the clinic's data or the animal data or customer
            information only
  author:   Oluwaseun Ogunmeru
*/
#include <iostream>
using namespace std;

#include "Control.h"


int main()
{
  Control control("KING'S PASTRY & BREAKFAST");

  control.launch();

  return 0;
}
