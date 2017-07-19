// implicit-explicit.cpp by Bill Weinman <http://bw.org/>
// bw updated 2014-11-02
#include <cstdio>
using namespace std;

const size_t _maxsize = 1024;

class strsize {
    size_t _size = 0;
public:
    strsize(const int);     // constructor: size from int
    strsize(const char *);  // constructor: size from c-string
    size_t size() const;
};

strsize::strsize(const int n) {
    puts("constructor: size from int");
    _size = (n <= _maxsize) ? n : 0;
}

strsize::strsize(const char * s) {
    puts("constructor: size from c-string");
    for(size_t i = 0; i < _maxsize; i++) {
        if(s[i] == 0) {
            _size = i;
            return;
        }
    }
    _size = 0;
}

size_t strsize::size() const {
    return _size;
}

using namespace std;

void func(const strsize & s) {
    printf("size is %ld\n", s.size());
}

int main( int argc, char ** argv ) {
    strsize s = 'x';
    printf("size is %ld\n", s.size());
    func('x');
    return 0;
}

