#include "diff.h"
#include "min.h"
#include "max.h"

int diff(int n[],int length) {
    int a, b, c;
    a = min(n, length);
    b = max(n, length);
    c = b - a;
    return c;
}
