// iostream-formatting.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main( int argc, char ** argv ) {
    // cout is a very common class from iostream
    cout << "Hello, World!\n";
    
    string istr;
    cout << "Prompt: ";
    cin >> istr;	// one word at a time
    cout << "Input: " << istr << endl;
    
    // integer formatting
    int i1 = 42;
    int i2 = 127;
    int i3 = 5555;
    cout << "default: " << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "hex: " << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "hex with showbase: " << showbase << hex << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "octal with showbase: " << oct << i1 << ' ' << i2 << ' ' << i3 << endl;
    cout << "default: " << noshowbase << dec << i1 << ' ' << i2 << ' ' << i3 << endl;
    
    // floating point formatting options
    double d1, d2, d3;
    d1 = 3.1415926534;
    d2 = 1234.5;
    d3 = 4.2e-10;
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed: " << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "scientific: " << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "fixed (3): " << setprecision(3) << fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout << "scientific (7): " << setprecision(7) << scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    cout.unsetf(ios_base::floatfield);
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << endl;
    
    // string formatting options
    string s1 = "This is a string.";
    string s2 = "This is a much longer string.";
    string s3 = "Today's news: Big Light in Sky Slated to Appear in East";
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    
    cout << setw(64) << right << s1 << endl;
    cout << setw(64) << right << s2 << endl;
    cout << setw(64) << right << s3 << endl;
    
    cout << setfill('-') << setw(64) << right << s1 << endl;
    cout << setfill(' ') << setw(64) << right << s1 << endl;
    cout << left << s1 << endl;
    
    return 0;
}
