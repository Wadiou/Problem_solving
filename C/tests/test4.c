#include <stdio.h>

int main() {
    int c;
    printf("%pEnter a num\n", &c);
    scanf("%d" , &c);
    printf("%d", c);
    return 0;
}