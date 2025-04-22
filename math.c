#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    soma(1, 2);
    sub(5, 1);
    printf(soma / sub);
    return 0;
}