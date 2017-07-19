// compound-op.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

class num {
    int value;
public:
    num( int x ) : value(x) {}
    int getvalue() const { return value; }
    int setvalue( int x ) { return value = x; }
    num & operator += ( const num & n );
};

num & num::operator+=(const num & n) {
    value += n.value;
    return *this;
}

int main( int argc, char ** argv )
{
    num n(42);
    num n2(127);
    n += n2;
    printf("value is %d\n", n.getvalue());
    return 0;
}
