// bprint.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

const char * u8_to_bin ( unsigned char x );

int main( int argc, char ** argv )
{
    unsigned char x = 5;
    unsigned char y = 10;
    printf("x is %s\n", u8_to_bin(x));
    printf("y is %s\n", u8_to_bin(y));
    printf("result is %s\n", u8_to_bin(x | y));
    return 0;
}

const char * u8_to_bin ( unsigned char x ) {
    static char s[sizeof(char) + 1];
    for ( char & c : s ) c = 0; // zero out string
    char * sp = s;
    for (unsigned char z = 128; z > 0; z >>= 1) {
        *(sp++) = ((x & z) == z) ? '1' : '0';
    }
    return s;
}

