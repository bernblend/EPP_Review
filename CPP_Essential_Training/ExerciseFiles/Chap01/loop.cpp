// loop.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main(int argc, char ** argv)
{
    puts("loop test");
    for (int i = 0; argv[i]; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
