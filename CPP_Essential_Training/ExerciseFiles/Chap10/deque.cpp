// deque.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main( int argc, char ** argv ) {
    deque<string> dqs;
    
    cout << "push_back values: " << endl;
    dqs.push_back("one");
    dqs.push_back("two");
    dqs.push_back("three");
    dqs.push_back("four");
    dqs.push_back("five");
    dqs.push_back("six");
    dqs.push_back("seven");
    dqs.push_back("eight");
    dqs.push_back("nine");
    dqs.push_back("ten");
    
    cout << "size: " << dqs.size() << endl;
    cout << "front: " << dqs.front() << endl;
    cout << "back: " << dqs.back() << endl;
    
    // access deque with iterator
    for(string s : dqs) cout << s << ' ';
    cout << endl;
    
    cout << "pop from front:" << endl;
    dqs.pop_front();
    for(string s : dqs) cout << s << ' ';
    cout << endl;
    
    cout << "pop from back:" << endl;
    dqs.pop_back();
    for(string s : dqs) cout << s << ' ';
    cout << endl;
    
    cout << "push front:" << endl;
    dqs.push_front("newfront");
    for(string s : dqs) cout << s << ' ';
    cout << endl;
    
    cout << "push back:" << endl;
    dqs.push_back("newback");
    for(string s : dqs) cout << s << ' ';
    cout << endl;
    
    return 0;
}
