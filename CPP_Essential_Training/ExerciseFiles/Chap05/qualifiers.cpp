// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    int x = 7;
    return ++x;
}

int main( int argc, char ** argv ) {
    int i = 42;
    printf("The integer is %d\n", i);
    return 0;
}

