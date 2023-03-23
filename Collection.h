/*
 purpose: Stores a collection of Identifiable objects
*/
#ifndef COLLECTION_H
#define COLLECTION_H
#include "Identifiable.h"


class Collection
{
  public:
    Collection(bool);
    void setAsc(bool);
    virtual ~Collection();
    virtual bool add(Identifiable*) = 0;
    virtual bool find(int, Identifiable**) = 0;
    virtual void print() = 0;

  protected:
    bool asc;

};

#endif
