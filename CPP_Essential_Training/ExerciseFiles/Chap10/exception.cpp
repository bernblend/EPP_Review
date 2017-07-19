// exception.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <exception>
using namespace std;

void broken() {
    cout << "this is a broken function" << endl;
    throw exception();
}

int main( int argc, char ** argv ) {
    cout << "let's have an emergency!" << endl;
    broken();
    return 0;
}
