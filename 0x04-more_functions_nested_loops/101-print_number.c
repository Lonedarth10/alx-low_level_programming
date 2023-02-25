#include <stdio.h>
#include "main.h"
void print_number(int n);

int main() {
    int n = 12345;
    print_number(n);
    return 0;
}

void print_number(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10) {
        print_number(n / 10);
    }
    putchar('0' + n % 10);
}

