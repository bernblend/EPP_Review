/*
  loop.cpp
  July 19, 2017
  bernblend
*/
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
