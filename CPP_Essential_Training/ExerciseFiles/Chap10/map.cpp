// map.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main( int argc, char ** argv ) {
    cout << "map of strings from initializer list:" << endl;
    map<string, string> strmap = { { "George", "Father" }, { "Ellen", "Mother" },
        { "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };
    
    cout << "size is " << strmap.size() << endl;
    cout << "get some values:" << endl;
    cout << "George is " << strmap["George"] << endl;
    cout << "Ellen is " << strmap.at("Ellen") << endl;
    cout << "Spike is " << strmap.find("Spike")->second << endl;
    cout << endl;
    
    cout << "loop through the set:" << endl;
    for( auto p : strmap ) {
        cout << p.first << " is " << p.second << endl;
    }
    cout << endl;
    
    cout << "insert an element:" << endl;
    strmap.insert( { "Luke", "Neighbor" } );
    cout << "inserted - size is " << strmap.size() << endl;
    for( auto p : strmap ) {
        cout << p.first << " is " << p.second << endl;
    }
    cout << endl;
    
    cout << "insert a duplicate:" << endl;
    auto rp = strmap.insert( { "Luke", "Neighbor" } );
    if (rp.second) {
        cout << "insert succeeded: " << rp.first->first << " is " << rp.first->second << endl;
    } else {
        cout << "insert failed" << endl;
    }
    cout << "after insert size is " << strmap.size() << endl;
    for( auto p : strmap ) {
        cout << p.first << " is " << p.second << endl;
    }
    cout << endl;
    
    cout << "find and erase an element:" << endl;
    auto it = strmap.find("Spike");
    if(it != strmap.end()) {
        cout << "found " << it->first << ":" << it->second << endl;
        strmap.erase(it);
        cout << "erased - size is " << strmap.size() << endl;
    } else {
        cout << "not found" << endl;
    }
    for( auto p : strmap ) {
        cout << p.first << " is " << p.second << endl;
    }
    cout << endl;
    
    return 0;
}
