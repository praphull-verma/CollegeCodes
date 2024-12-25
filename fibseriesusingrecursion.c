#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10; // Number of terms in the Fibonacci series
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
