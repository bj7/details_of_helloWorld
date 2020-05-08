#include <stdio.h>
int main() {
    fwrite("Hello, world!\n", 128, 15, stdout);
    return 0;
}
