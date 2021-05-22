#include "fibonacci.h"

int fibonacci(int nth) {
    int a = 1, b = 1;
    for (int i = 0; i < nth; ++i) {
        int res = a + b;
        a = b;
        b = res;
    }
    return b;
}