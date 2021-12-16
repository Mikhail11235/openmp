//
// Created by Михаил Посевин on 02.12.2021.
//

#ifndef TASKS_INTEGRAL_H
#define TASKS_INTEGRAL_H

#include <vector>
#include <chrono>
#include "omp.h"

using namespace std;

class Integral {
public:
    double calculate(vector<double> y_values, int dots_number, double partition, int threads);
    vector<double> get_y_values(double segment_length, double segment_end, int dots_number, double partition);
};


#endif //TASKS_INTEGRAL_H
