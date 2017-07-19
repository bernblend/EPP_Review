// numword-test.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstdint>
#include "numword.h"
using namespace std;

int main( int argc, char ** argv )
{
    bw::numword nw;
    uint64_t n;

    n = 3; printf("n is %lld, %s\n", n, nw.words(n));
    n = 47; printf("n is %lld, %s\n", n, nw.words(n));
    n = 73; printf("n is %lld, %s\n", n, nw.words(n));
    n = 1492; printf("n is %lld, %s\n", n, nw.words(n));
    n = 10012; printf("n is %lld, %s\n", n, nw.words(n));
    n = 100073; printf("n is %lld, %s\n", n, nw.words(n));
    n = 1000000; printf("n is %lld, %s\n", n, nw.words(n));
    n = 1000000001; printf("n is %lld, %s\n", n, nw.words(n));
    n = 123000000000; printf("n is %lld, %s\n", n, nw.words(n));
    n = 474142398123; printf("n is %lld, %s\n", n, nw.words(n));
    n = 1474142398007; printf("n is %lld, %s\n", n, nw.words(n));
    n = 999000000000000; printf("n is %lld, %s\n", n, nw.words(n));
    n = 999999999999999999; printf("n is %lld, %s\n", n, nw.words(n));
    n = 1000000000000000000; printf("n is %lld, %s\n", n, nw.words(n));

    for( int i = 0; i < 201; ++i) {
        printf("%d is %s\n", i, nw.words(i));
    }
    return 0;
}
