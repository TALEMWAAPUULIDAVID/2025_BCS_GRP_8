#include "calculator.h"
#include <math.h>

float sum(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mul(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}

float mod(float x, float y) {
    return fmodf(x,y);
}
