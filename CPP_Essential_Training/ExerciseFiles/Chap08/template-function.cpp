// template-function.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

template <typename T> T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
    printf("max is: %d\n", maxof<int>( 7, 9 ));
    return 0;
}
