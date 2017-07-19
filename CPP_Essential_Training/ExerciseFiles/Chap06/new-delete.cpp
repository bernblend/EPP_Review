// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2014-11-13
#include <cstdio>
using namespace std;

const long int _count = 100;

int main( int argc, char ** argv ) {
    printf("allocate space for %lu ints at *ip with new\n", _count);
    int * ip = new int [_count];
    
    if(ip == NULL) {
        puts("new failed");
        return 1;
    }
    
    for( int i = 0; i < _count; i++ ) {
        ip[i] = i;
    }
    for( int i = 0; i < _count; i++ ) {
        printf("%d:%d ", i, ip[i]);
        if((i > 0 && i % 25 == 0) || i == _count - 1) puts("");
    }
    
    delete [] ip;
    puts("space at *ip deleted");
    
    return 0;
}
