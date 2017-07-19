/*
  working.cpp
  July 19, 2017
  bernblend
*/
#include <cstdio>   //allows use of puts().
using namespace std;

int main( int argc, char ** argv )
{
  int i = 7;
  i += 5;
  printf("The value is %d\n", i);

  int x;
  printf("x is %d\n", x = 42 * (12 + 14));
  puts("Hello bern, this is working.cpp.");
  return 0;
}
