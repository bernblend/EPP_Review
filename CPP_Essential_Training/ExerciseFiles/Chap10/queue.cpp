// queue.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <queue>
#include <list>
using namespace std;

int main( int argc, char ** argv ) {
    cout << "initialize queue from list:" << endl;
    list<int> li = {1, 2, 3, 4, 5};
    queue<int, list<int>> qi(li);	// constructor copies to new list
    
    cout << "li has " << li.size() << " entries; qi has " << qi.size() << " entries." << endl;
    
    cout << "pop all from qi:" << endl;
    while(!qi.empty()) {
        cout << qi.front() << " ";
        qi.pop();
    }
    cout << endl;
    
    cout << "li has " << li.size() << " entries; qi has " << qi.size() << " entries." << endl;
    
    cout << "contents of li after qi is emptied:" << endl;
    for( int i : li ) cout << i << ' ';
    cout << endl;
    
    // default queue
    queue<string> qs;
    cout << "push strings onto qs:" << endl;
    qs.push("one");
    qs.push("two");
    qs.push("three");
    qs.push("four");
    qs.push("five");
    cout << "size of qs: " << qs.size() << endl;
    
    cout << "pop all from qs:" << endl;
    while(!qs.empty()) {
        cout << qs.front() << " ";
        qs.pop();
    }
    cout << endl;
    cout << "size of qs: " << qs.size() << endl;
    
    return 0;
}
