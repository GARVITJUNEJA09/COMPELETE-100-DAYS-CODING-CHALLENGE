//Q104: Find pivot integer x such that sum(1..x) = sum(x..n)

#include <stdio.h>
#include <stdlib.h>

int pivot_integer(int n) {
    int total = n*(n+1)/2;
    for (int x=1; x<=n; x++) {
        int left = x*(x+1)/2;
        int right = total - left + x;
        if (left == right) return x;
    }
    return -1;
}

int main() {
    int n = 8;
    printf("%d\n", pivot_integer(n));
    return 0;
}