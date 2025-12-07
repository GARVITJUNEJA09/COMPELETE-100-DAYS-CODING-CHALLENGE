#include <stdio.h>
#include <stdlib.h>

struct N {
    int v;
    struct N *p;
    struct N *n;
};

struct N *f = NULL;
struct N *r = NULL;

void pr(int x) {
    struct N *t = (struct N*)malloc(sizeof(struct N));
    t->v = x;
    t->p = NULL;
    t->n = NULL;

    if (r == NULL) {
        f = r = t;
        return;
    }
    r->n = t;
    t->p = r;
    r = t;
}

void pf() {
    if (f == NULL) return;

    struct N *t = f;
    f = f->n;

    if (f != NULL) {
        f->p = NULL;
    } else {
        r = NULL;
    }
    free(t);
}

int gf() {
    return (f != NULL) ? f->v : -1;
}

void fn(int *a, int n, int k) {
    int i;
    for (i = 0; i < n; i++) {
        // Remove indices that fall outside the current window [i-k+1, i]
        if (gf() != -1 && gf() == i - k) {
            pf();
        }

        // Add the index if the element is negative
        if (a[i] < 0) {
            pr(i);
        }

        // Output result once the window is fully formed
        if (i >= k - 1) {
            int x = gf();
            if (x != -1) {
                printf("%d ", a[x]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");
}

int main() {
    // Input 2 Example: [12, -1, -7, 8, -15, 30, 16, 28], k = 3
    int a[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;

    fn(a, n, k);

    return 0;
}