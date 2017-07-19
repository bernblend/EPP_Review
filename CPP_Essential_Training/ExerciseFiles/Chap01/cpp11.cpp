// cpp11.cpp by Bill Weinman <http://bw.org/>
// test for modern C++ compiler
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    int ia[] = { 1, 2, 3, 4, 5 };
    for( auto i : ia ) {
        printf("i is %d\n", i);
    }
    return 0;
}
