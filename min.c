#include "min.h"

int min(int n[],int length) {
    int a = 1000;
    int el;
    for (int i = 0; i< length; i++) {
        if (n[i] < a) {
            a = n[i];
        }
    }
    return a;
}
