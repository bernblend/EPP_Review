// union.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstdint>
using namespace std;

union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main( int argc, char ** argv )
{
    union ipv4 addr;
    addr.octets = { 192, 163, 73, 42 };
    printf("addr is %d.%d.%d.%d is %08x\n",
           addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32 );
    return 0;
}
