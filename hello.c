#include <stdio.h>

int main(void) {
    printf("Hello, World!!\n"); 
}

/*
C pre processor processes the #include to add the stdio.h before compilation

#include
#define

gcc -Wall -Wextra -std=99 -pedantic foo.c
-Wall generates warnings 
-Wextra generates additional warnings that might be missed by -Wall
-std=99 standard C99 features 
-pedantic strictly adheres to the lang standard specified by -std

*/