#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int mb_count = 0;

int main(int argc, char *argv[]) {
    mb_count = atoi(argv[1]);
    long int inc = (mb_count * 1024 * 1024 * sizeof(char));
    int used = 0;
    int *p;
    while (1) {


        p = (int*) calloc(1,inc);
        if (!p)
            break;
        used += mb_count;
        printf("used: %ld Mb\n", used / (1024 * 8 * sizeof(char)));


     }
}
