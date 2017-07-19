// numword.cpp by Bill Weinman <http://bw.org/>
#include "numword.h"
using namespace bw;

// destructor
numword::~numword() {
    clearbuf();
}

// assignment operator
uint64_t numword::operator = ( const uint64_t num ) {
    setnum(num);
    return getnum();
}

const char * numword::words() {
    return words(_num);
}

// convert to words
const char * numword::words( const uint64_t num ) {
    if (num > _BW_MAXNUM) {
        return errnum;
    }
    initbuf();
    uint64_t n = num;
    if (n == 0) {
        appendbuf(_singles[n]);
        return _buf;
    }

    // powers of 1000
    if (n >= 1000) {
        for(int i = 5; i > 0; --i) {
            uint64_t power = (uint64_t) pow(1000.0, i);
            uint64_t _n = ( n - ( n % power ) ) / power;
            if (_n) {
                int index = i;
                numword _nw(_n);
                appendspace();
                appendbuf(_nw.words());
                appendspace();
                appendbuf(_powers[index]);
                n -= _n * power;
            }
        }
    }
    // hundreds
    if (n >= 100 && n < 1000) {
        uint64_t _n = ( n - ( n % 100 ) ) / 100;
        numword _nw(_n);
        appendspace();
        appendbuf(_nw.words());
        appendspace();
        appendbuf(_hundred);
        n -= _n * 100;
    }
    // tens
    if (n >= 20 && n < 100) {
        uint64_t _n = ( n - ( n % 10 ) ) / 10;
        appendspace();
        appendbuf(_tens[_n]);
        n -= _n * 10;
        hyphen_flag = true;
    }
    // teens
    if (n >= 10 && n < 20) {
        appendspace();
        appendbuf(_teens[n - 10]);
        n = 0;
    }
    // singles
    if (n > 0 && n < 10) {
        appendspace();
        appendbuf(_singles[n]);
    }
    return _buf;
}

// -- private methods --

// reset the buffer
void numword::clearbuf() {
    if (_buf != nullptr) {
        free(_buf);
        _buf = nullptr;
    }
    _buflen = 0;
}

// initialize the buffer
void numword::initbuf() {
    clearbuf();
    _buf = (char *) malloc(_BW_NUMWORD_MAXSTR);
    *_buf = 0;
    hyphen_flag = false;
}

// append space (or hyphen)
void numword::appendspace() {
    if (_buflen) {
        appendbuf( hyphen_flag ? _hyphen : _space);
        hyphen_flag = false;
    }
}

// append text to the string buffer
void numword::appendbuf(const char * s) {
    if(!s) return;
    size_t slen = strnlen(s, _BW_NUMWORD_MAXSTR);
    if (slen < 1) {
        return;
    }
    if ((slen + _buflen + 1) >= _BW_NUMWORD_MAXSTR) {
        return;
    }
    memcpy(_buf + _buflen, s, slen);
    _buflen += slen;
    _buf[_buflen] = 0;
}
