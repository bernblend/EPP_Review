#include "Book_List.h"
#include <cstdio>
#include <string>
using namespace std;


Book_List::Book_List(){
    this->cur = NULL;
    this->head = NULL;
}

void Book_List::AddBook(string name,string author){
    Book_Node* newBook = new Book_Node;
    newBook->name = name;
    newBook->author = author;
    newBook->next = NULL;

    if(head != NULL){
        cur = head;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newBook;
    }else{
        head = newBook;
    }
}


void Book_List::printList(Book_Node* node){

    cur = node;

    if (node == NULL) {
    }else{
        printf("| %s | %s\n",cur->name.c_str(),cur->author.c_str());
        printList(cur->next);
    }
}

void Book_List::printList(){
    printList(head);
}
