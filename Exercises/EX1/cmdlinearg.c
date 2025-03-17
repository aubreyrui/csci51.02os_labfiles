#include <stdio.h>

int main(int argc, char* argv[]) {
    for (int i = 0; i<argc; i++) {
        printf("%c\n", argv[i][0]);
        printf("%s\n", argv[i]+1);
    }
    return 0;
}