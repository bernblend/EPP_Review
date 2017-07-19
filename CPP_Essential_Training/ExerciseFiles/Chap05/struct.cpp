// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main( int argc, char ** argv ) {
    Employee joe = { 42, "Joe", "Boss" };
    
    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);
    
    return 0;
}
