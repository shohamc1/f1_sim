#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    srand (time (0));

    double times [3] = {100, 100, 100};
    double skill [3] = {95, 90, 85};
    double r[3];
    double final [3];

    for (int i = 0; i < 3; i++) {
        r[i] = ((double) rand() / (RAND_MAX));
    }

    for (int i = 0; i < 3; i++) {
       final [i] = times[i] + pow (100 - skill[i], r [i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << i+1 << "\t" << final [i] << endl;
    }
}
