// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

string func() {
    return string("this is a string");
}

int main( int argc, char ** argv ) {
    auto x = func();
    printf("x is %s\n", x.c_str());
    printf("type of x is %s\n", typeid(x).name());
    return 0;
}
