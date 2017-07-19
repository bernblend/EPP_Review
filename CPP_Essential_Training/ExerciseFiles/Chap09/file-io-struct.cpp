// file-io-struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstring>
#include <cstdint>
using namespace std;

const size_t slen = 125;
struct s1 {
    uint8_t num;
    uint8_t len;
    char s[slen + 1];
};

int main( int argc, char ** argv ) {
    const char * fn = "test.file";			// file name
    const char * str = "This is a literal C-string.";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "wb");
    
    struct s1 buf1;
    for( int i = 0; i < 5; i++ ) {
        buf1.num = i;
        buf1.len = strlen(str);
        if(buf1.len > slen) buf1.len = slen;
        strncpy(buf1.s, str, slen);
        if( buf1.len == slen ) buf1.s[buf1.len] = 0; // make sure it's terminated
        fwrite(&buf1, sizeof(struct s1), 1, fw);
    }
    
    fclose(fw);
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    FILE * fr = fopen(fn, "rb");
    struct s1 buf2;
    size_t rc;
    while(( rc = fread(&buf2, sizeof(struct s1), 1, fr) )) {
        printf("a: %d, b: %d, s: %s\n", buf2.num, buf2.len, buf2.s);
    }
    
    fclose(fr);
    remove(fn); // delete the file
    
    printf("done.\n");
    
    return 0;
}
