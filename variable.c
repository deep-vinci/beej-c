#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int a = 234;
    float b = 32.2;
    char c = 'A';
    char *d = "Hello, world!";
    
    printf(" %d \n %f \n %c \n %s \n", a, b, c, d);


    int x = 1;

    if (!x) {
        printf("x is true\n");
    }

    bool y = 1;

    if (y) {
        printf("x is true, by stdbool\n");
    }
    
}

/*

Variable - human readable name that refers to some data in memory
variables are not containers, but a name for memeory address

Memory is a big array of bytes
each bytes = 8 bits 0000 0000 
each memory index can be refered to it by its index or address, or a loc or a pointer

% format string
%d = int
%f = float
%c = char
%s = string or (char *)

#include <stdbool.h> to use bool type 
which is just a syntactic sugar over 1 and 0

*/
