#include <iostream>
using namespace std;

#include "olcNoiseMaker.h"

double MakeNoise (double dTime) {
    return 0.5 * sin(440 * 2 * 3.14159 * dTime);
}

int main(){



    return 0;
}