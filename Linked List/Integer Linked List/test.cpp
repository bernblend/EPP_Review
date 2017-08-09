#include "IntListNode.h"
#include "IntegerList.h"
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  IntegerList* list = new IntegerList;

  puts("This is a program that works with Linked List.");
  puts("Try it out");


  char menuInput;
  int numInput;
  bool menuValidation = false;

  while (!menuValidation) {

    puts("(A)dd number to list.");
    puts("(P)rint list.");
    puts("(S)um of list.");
    puts("(Q)uit program.");

    cin >> menuInput;
    switch (menuInput) {
      case 'A':
      case 'a':
      menuValidation = false;
      puts("Input Number: ");
      cin >> numInput;
      list->AddInt(numInput);
      break;
      case 'P':
      case 'p':
      menuValidation = false;
      list->print();
      break;
      case 'S':
      case 's':
      menuValidation = false;
      printf("Sum: %d\n",list->sum());
      break;
      case 'Q':
      case 'q':
      menuValidation = true;
      exit(0);
      break;
      default:
      menuValidation = false;
      puts("Invalid input");
      break;
    }
  }


  return 0;
}
