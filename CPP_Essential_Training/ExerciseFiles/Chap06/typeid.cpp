// typeid.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <typeinfo>
using namespace std;

struct A { int x; };
struct B { int x; };

struct A a1;
struct A a2;
struct B b1;
struct B b2;

int main( int argc, char ** argv ) {
    if(typeid(a1) == typeid(A)) {
        puts("same");
    } else {
        puts("different");
    }
    return 0;
}
