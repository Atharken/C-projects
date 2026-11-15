#include <stdio.h>

enum months {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main() {

    enum months current = august;

    printf("%d", current);

    return 0;
}