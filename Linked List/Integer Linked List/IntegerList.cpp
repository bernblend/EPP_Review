#include "IntegerList.h"
#include <cstdio>
using namespace std;

IntegerList::IntegerList(){
  this->head = NULL;
  this->current = NULL;
}

// Interator Methods
void IntegerList::AddInt(int num){
  IntListNode* node = new IntListNode;
  node->data = num;
  node->next = NULL;

  if(head != NULL){
    current = head;
    while(current->next != NULL){
      current = current->next;
     }
     current->next = node;
  }else {
    head = node;
  }

}
void IntegerList::AddAtPosition(int num,int index){
  IntListNode* node = new IntListNode;
  node->data = num;
  node->next = NULL;

  int location = 0;

  if(head == NULL || index == 0){
    head = node;
  }else {
    current = head;

    while(current->next != NULL){
      current = current->next;
      location++;
      if (index == location+1) {
        break;
      }

     }
     node->next = current->next;
     current->next = node;
  }
}


void IntegerList::print(IntListNode* node){
  if(node == NULL){
    puts("");
  }else{
    printf("%d ",node->data);
    print(node->next);
  }
}

void IntegerList::print(){
  print(head);
}


int IntegerList::sum(IntListNode* node){
  if(node == NULL){
    return 0;
  }else{
    return sum(node->next) + node->data;
  }
}

int IntegerList::sum(){
  IntListNode* current = head;
  return sum(current);
}
