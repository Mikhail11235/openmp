//
// Created by Михаил Посевин on 02.12.2021.
//

#ifndef TASKS_MAX_H
#define TASKS_MAX_H

#include <iostream>
#include <fstream>
#include <chrono>
#include "omp.h"


using namespace std;

class Max {
    bool debug;
    bool omp;
    bool log_time;

public:
    Max(bool _debug, bool _omp, bool _log_time) {
        debug = _debug;
        omp = _omp;
        log_time = _log_time;
    };

    int get_max(int *array, int array_length, int threads);
};


#endif //TASKS_MAX_H
