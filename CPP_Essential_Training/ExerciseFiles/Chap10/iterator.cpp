// iterator.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <vector>
using namespace std;

int main( int argc, char ** argv ) {
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator it;   // vector iterator
    
    // input iterator
    cout << "input iterator:" << endl;
    for(it = vi1.begin(); it < vi1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // save start and end points
    vector<int>::iterator start = vi1.begin();
    vector<int>::iterator end = vi1.end();
    
    // output iterator
    cout << "output iterator:" << endl;
    for(it = start; it < end; it++) {
        cout << ++(*it) << " ";
        --(*it);
    }
    cout << endl;
    
    // forward iterator allows re-iteration of same set with same results
    cout << "forward iterator:" << endl;
    for(it = start; it < end; ++it) {
        cout << *it << " ";
    }
    for(it = start; it < end; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // bidirectional iterator -- iterate forward or backward
    // allows it--
    cout << "bidirectional iterator:" << endl;
    for(it = end - 1; it >= start; --it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // random access iterator
    // allows += and -= access
    cout << "random access iterator:" << endl;
    it = start + 7;
    cout << *it << " ";
    it -= 3;
    cout << *it << " ";
    it += 4;
    cout << *it << " ";
    cout << vi1[5] << " ";
    cout << endl;
    
    return 0;
}
