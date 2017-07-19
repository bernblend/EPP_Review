// new-delete.cpp by Bill Weinman <http://bw.org/>
// updated 2014-10-08 bw
#include <cstdio>
#include <new>
using namespace std;

class A {
    int _a = 0;
    int _b = 0;
    int _c = 0;
public:
    A( int i = 0 );
    ~A();
    int a() { return _a; }
    int b() { return _b; }
    int c() { return _c; }
};

A::A( int i ) : _a(i), _b(i + 1), _c(i + 2) {
    puts("A constructor called");
}

A::~A() {
    puts("A destructor called");
}

int main( int argc, char ** argv ) {
    puts("allocating space for one A object");
    A * a = new A;
    if(a == nullptr) {
        puts("new A failed");
        return 1;
    }
    printf("a: %d, %d, %d\n", a->a(), a->b(), a->c());
    delete a;
    puts("A object has been deleted");
    
    return 0;
}
