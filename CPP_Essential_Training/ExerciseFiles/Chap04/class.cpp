// class.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a very simple class
class Class1 {
    int i = 0;
public:
    void setvalue( const int value ) { i = value; }
    int getvalue() const { return i; }
};

int main( int argc, char ** argv ) {
    int i = 47;
    Class1 object1;
    
    object1.setvalue(i);
    printf("value is %d\n", object1.getvalue());
    return 0;
}
