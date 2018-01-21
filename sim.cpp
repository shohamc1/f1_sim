#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    srand (time (0));

    double times [3] = {83.251, 83.456 , 85.425};
    double skill [3] = {90, 95, 100};
    double r[3];
    double final [3];

//    for (int i = 0; i < 3; i++) {
//        cout << "Enter time for driver " << i+1 << ": ";
//        cin >> times [i];
//        cout << "Enter skill level of driver " << i + 1 << ": ";
//        cin >> skill [i];
//    }

    for (int i = 0; i < 3; i++) {
        r[i] = ((double) rand() / (RAND_MAX));
    }

    for (int i = 0; i < 3; i++) {
       final [i] = times[i] + pow (102 - skill[i], r [i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << i+1 << "\t" << final [i]  << "\t" << r[i] << endl;
    }
}
