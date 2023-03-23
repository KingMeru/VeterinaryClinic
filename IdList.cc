#include "IdList.h"
#include <cstddef>

IdList::IdList(bool b) : Collection(b), head(NULL), size(0){

}

IdList::~IdList(){
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

void IdList::print(){
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}

bool IdList::add(Identifiable* obj){
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = obj;
  tmpNode->next = NULL;

  prevNode = NULL;
  currNode = head;
  if(asc){
    while (currNode != NULL) {
      if (tmpNode->data->getCompValue() < currNode->data->getCompValue()) {
        break;
      }
      prevNode = currNode;
      currNode = currNode->next;
    }

    if (prevNode == NULL) {
      head = tmpNode;

    }
    else {
      prevNode->next = tmpNode;
    }

    tmpNode->next  = currNode;
    size++;
  }
  else{
    while (currNode != NULL) {
      if (tmpNode->data->getCompValue() > currNode->data->getCompValue()) {
        break;
      }
      prevNode = currNode;
      currNode = currNode->next;
    }

    if (prevNode == NULL) {
      head = tmpNode;

    }
    else {
      prevNode->next = tmpNode;
    }

    tmpNode->next  = currNode;
    size++;
  }


  return true;
}

bool IdList::find(int id, Identifiable** foundObj){
  Node* currNode = head;
  while (currNode != NULL) {
    if(currNode->data->getId() == id){
      *foundObj = currNode->data;
      return true;
    }
    currNode = currNode->next;
  }
  return false;
}

void IdList::cleanupData(){
  Node* currNode = head;
  while (currNode != NULL) {
    delete currNode->data;
    currNode = currNode->next;
  }
}

int IdList::getSize(){
  return size;
}
