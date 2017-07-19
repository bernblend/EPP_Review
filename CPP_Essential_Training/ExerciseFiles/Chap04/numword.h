// numword.h by Bill Weinman <http://bw.org/>
#ifndef _NUMWORD_H
#define _NUMWORD_H

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cmath>

#define _BW_NUMWORD_MAXSTR 1024

// nine hundred ninty-nine quadrillion nine hundred ninty-nine trillion nine hundred ninty-nine billion nine hundred ninty-nine million nine hundred ninty-nine thousand nine hundred ninty-nine
#define _BW_MAXNUM 999999999999999999

namespace bw {

static const char * errnum = "error";

static const char * _singles[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

static const char * _teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

static const char * _tens[] = {
    errnum, errnum, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty",
};

static const char * _hundred = "hundred";

static const char * _powers[] = {
    errnum, "thousand", "million", "billion", "trillion", "quadrillion"
};

static const char * _hyphen = "-";
static const char * _space = " ";
    
class numword {
    uint64_t _num = 0;
    char * _buf = nullptr;
    size_t _buflen = 0;
    bool hyphen_flag = false;

    void clearbuf();
    void initbuf();
    void appendspace();
    void appendbuf(const char * s);

public:
    numword() : _num(0) {}
    numword(const uint64_t num) : _num(num) {}
    ~numword();
    void setnum(const uint64_t num) { _num = num; }
    uint64_t getnum() const { return _num; }
    uint64_t operator = ( const uint64_t num );
    const char * words();
    const char * words( const uint64_t num );
};

}

#endif /* _NUMWORD_H */
