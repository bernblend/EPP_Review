// template-class.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <exception>
using namespace std;

// simple exception class
class E : public std::exception {
public:
    explicit E(const char * s) throw() : msg(s) { }
    const char * what() const throw() { return msg; }
private:
    E(){};	// no default constructor
    const char * msg;
};

// simple fixed-size LIFO stack template
template <typename T>
class Stack {
private:
    static const int defaultSize = 10;
    static const int maxSize = 1000;
    int _size;
    int _top;
    T * stackPtr;
public:
    explicit Stack(int s = defaultSize);
    ~Stack() { delete[] stackPtr; }
    T & push( const T & );
    T & pop();
    bool isEmpty() const { return _top < 0; }
    bool isFull() const { return _top >= _size - 1; }
    int top() const { return _top; }
    int size() const { return _size; }
};

// Stack<T> constructor
template <typename T>
Stack<T>::Stack ( int s ) {
    if(s > maxSize || s < 1) throw E("invalid stack size");
    else _size = s;
    stackPtr = new T[_size];
    _top = -1;
}

template <typename T>
T & Stack<T>::push ( const T & i ) {
    if(isFull()) throw E("stack full");
    return stackPtr[++_top] = i;
}

template <typename T>
T & Stack<T>::pop () {
    if(isEmpty()) throw E("stack empty");
    return stackPtr[_top--];
}

int main( int argc, char ** argv ) {
    try {
        Stack<int> si(5);
        
        cout << "si size: " << si.size() << endl;
        cout << "si top: " << si.top() << endl;
        
        for ( int i : { 1, 2, 3, 4, 5 } ) {
            si.push(i);
        }
        
        cout << "si top after pushes: " << si.top() << endl;
        cout << "si is " << ( si.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!si.isEmpty()) {
            cout << "popped " << si.pop() << endl;
        }
    } catch (E & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    
    try {
        Stack<string> ss(5);
        
        cout << "ss size: " << ss.size() << endl;
        cout << "ss top: " << ss.top() << endl;
        
        for ( const char * s : { "one", "two", "three", "four", "five" } ) {
            ss.push(s);
        }
        
        cout << "ss top after pushes: " << ss.top() << endl;
        cout << "ss is " << ( ss.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!ss.isEmpty()) {
            cout << "popped " << ss.pop() << endl;
        }
    } catch (E & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    
    return 0;
}
