#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int end = argc - 1;
    for (char i = end; i>= 0; i--) {
        printf("%s\n", argv[i]);
    }
    return 0;
}