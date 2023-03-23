/*
  Purpose: stores a collection of Identifiable using a linked list
*/
#ifndef IDLIST_H
#define IDLIST_H
#include "Collection.h"

class IdList : public Collection
{
  class Node
  {
    public:
      Identifiable* data;
      Node*    next;
  };
  public:
    IdList(bool);
    virtual ~IdList();
    virtual bool add(Identifiable*);
    virtual bool find(int, Identifiable**);
    virtual void print();
    void cleanupData();
    int getSize();

  private:
    Node* head;
    int size;
};

#endif
