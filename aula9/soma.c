#include <stdio.h>

void mostrarsoma(int x, int y);

int main() {

    mostrarsoma(1,2);

    return 0;

}

void mostrarsoma(int x, int y) {

    printf("Soma: %d", x + y);
    return;

}
