// float-types.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv ) {
    float f;
    double df;
    long double ldf;
    
    printf("size of float f is %ld\n", sizeof(f));
    printf("size of double float df is %ld\n", sizeof(df));
    printf("size of long double float ldf is %ld\n", sizeof(ldf));
    
    return 0;
}
