#ifndef INTEGER_LIST_H
#define INTEGER_LIST_H

#include "IntListNode.h"

class IntegerList{
private:
  IntListNode* head;
  IntListNode* current;

  void print(IntListNode*);
  int sum(IntListNode*);

public:
  IntegerList();
  // Recursion Methods
  void print();
  int sum();

  // Interator Methods
  void AddInt(int);
  void AddAtPosition(int,int);
};

#endif
