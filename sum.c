#include "sum.h"
#include "min.h"

int sum(int n[],int length) {
    int minN;
    minN = min(n, length);
    int res = 0;
    for (int i = 0; i< length; i++) {
        if (n[i] != minN) {
            res = res + n[i];
        }
        else {
            break;
        }
    }
    return res;
}
