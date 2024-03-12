#include <iostream>
void print_i () {
    int i;
    printf(" %d ", i++);
}
int main() {
    int j;
    for (j = 1; j <= 10; j++)
    print_i();
}