// enum.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

enum card_suit { SPD, HRT, DIA, CLB };
enum card_rank { ACE = 1, DEUCE = 2, JACK = 11, QUEEN, KING };

const char * aceString = "Ace";
const char * jckString = "Jack";
const char * queString = "Queen";
const char * kngString = "King";
const char * deuString = "Deuce";
const char * spdString = "Spades";
const char * hrtString = "Hearts";
const char * diaString = "Diamonds";
const char * clbString = "Clubs";

struct card {
    unsigned char rank;
    unsigned char suit;
};

card deck[52] = {
    { ACE, SPD }, { DEUCE, SPD }, { 3, SPD }, { 4, SPD }, { 5, SPD }, { 6, SPD }, { 7, SPD },
    { 8, SPD }, { 9, SPD }, { 10, SPD }, { JACK, SPD }, { QUEEN, SPD }, { KING, SPD },
    { 1, HRT }, { 2, HRT }, { 3, HRT }, { 4, HRT }, { 5, HRT }, { 6, HRT }, { 7, HRT },
    { 8, HRT }, { 9, HRT }, { 10, HRT }, { 11, HRT }, { 12, HRT }, { 13, HRT },
    { 1, DIA }, { 2, DIA }, { 3, DIA }, { 4, DIA }, { 5, DIA }, { 6, DIA }, { 7, DIA },
    { 8, DIA }, { 9, DIA }, { 10, DIA }, { 11, DIA }, { 12, DIA }, { 13, DIA },
    { 1, CLB }, { 2, CLB }, { 3, CLB }, { 4, CLB }, { 5, CLB }, { 6, CLB }, { 7, CLB },
    { 8, CLB }, { 9, CLB }, { 10, CLB }, { 11, CLB }, { 12, CLB }, { 13, CLB }
};

void print_card( const card & c ) {
    if(c.rank >= 3 && c.rank <= 10) {
        printf("%d of ", c.rank);
    } else {
        switch(c.rank) {
            case ACE:
                printf("%s of ", aceString);
                break;
            case JACK:
                printf("%s of ", jckString);
                break;
            case QUEEN:
                printf("%s of ", queString);
                break;
            case KING:
                printf("%s of ", kngString);
                break;
            case DEUCE:
                printf("%s of ", deuString);
                break;
        }
    }
    switch(c.suit) {
        case SPD:
            puts(spdString);
            break;
        case HRT:
            puts(hrtString);
            break;
        case DIA:
            puts(diaString);
            break;
        case CLB:
            puts(clbString);
            break;
    }
}

int main( int argc, char ** argv ) {
    for( card c : deck ) {
        print_card(c);
    }
    
    return 0;
}
