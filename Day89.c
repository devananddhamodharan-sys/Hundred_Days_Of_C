#include <stdio.h>

enum Code {
    ERR_NONE = 0,
    ERR_IO = 101,
    ERR_MEM = 204,
    ERR_PERM = 403
};

int main(void) {
    enum Code c1 = ERR_IO;
    enum Code c2 = ERR_PERM;
    int sum = c1 + c2;

    printf("c1 stored integer: %d\n", c1);
    printf("c2 stored integer: %d\n", c2);
    printf("c1 + c2 = %d\n", sum);
    printf("sizeof(enum Code) = %zu bytes\n", sizeof(enum Code));

    return 0;
}