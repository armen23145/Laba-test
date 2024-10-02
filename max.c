#include "max.h"

int max(int n[],int length) {
    int a = -999; 
    for (int i = 0; i<length; i++) {
        if (n[i] > a) {
            a = n[i];
        }
    }
    return a;
}
