/*
  Purpose: stores a collection of Identifiable using an Array
*/
#ifndef IDARRAY_H
#define IDARRAY_H

#include "Collection.h"
#include "defs.h"
class IdArray : public Collection
{
  public:
    IdArray(bool, int=MAX_ARR);
    virtual ~IdArray();
    virtual bool add(Identifiable*);
    virtual bool find(int, Identifiable**);
    virtual void print();

  private:
    Identifiable** allId;
    int capacity;
    int size;
};

#endif
