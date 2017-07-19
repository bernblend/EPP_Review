// stack.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <stack>
#include <string>
#include <list>
using namespace std;

int main( int argc, char ** argv ) {
    cout << "initialize stack from list:" << endl;
    list<int> li = { 1, 2, 3, 4, 5 };
    stack<int, list<int>> si(li);	// constructor copies to new list
    
    cout << "li has " << li.size() << " entries; si has " << si.size() << " entries." << endl;
    
    cout << "pop all from si:" << endl;
    while(!si.empty()) {
        cout << si.top() << " ";
        si.pop();
    }
    cout << endl;
    
    cout << "li has " << li.size() << " entries; si has " << si.size() << " entries." << endl;
    
    cout << "contents of li after sl is emptied:" << endl;
    for( int i : li ) cout << i << ' ';
    cout << endl;
    
    stack<string> ss;	// default stack uses deque object
    cout << "push strings onto ss:" << endl;
    ss.push("one");
    ss.push("two");
    ss.push("three");
    ss.push("four");
    ss.push("five");
    cout << "size of ss: " << ss.size() << endl;
    cout << "pop all from ss:" << endl;
    while(!ss.empty()) {
        cout << ss.top() << " ";
        ss.pop();
    }
    cout << endl;
    cout << "size of ss: " << ss.size() << endl;
    
    return 0;
}
