// c-strings.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv ) {
    char cstring[] = "String";

    puts(cstring);

    for( unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }
    return 0;
}
