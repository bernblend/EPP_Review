#include "Book_Node.h"
#include <string>


#ifndef BOOK_LIST
#define BOOK_LIST

class Book_List{
private:
    Book_Node* head;
    Book_Node* cur;
    void printList(Book_Node*);

public:
    Book_List();
    void AddBook(std::string,std::string);
    void printList();
};

#endif
