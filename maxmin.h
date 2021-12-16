//
// Created by Михаил Посевин on 30.11.2021.
//

#ifndef TASKS_MAXMIN_H
#define TASKS_MAXMIN_H

#include <vector>
#include <fstream>
#include <chrono>
#include "omp.h"
#include "utils.h"
#include <ctime>

using namespace std;

class MaxMin {
public:
    int maxmin_dynamic(vector <vector <int>> matrix, bool log_time, int threads,
                       int chunk = 10);
    int maxmin(vector <vector <int>> matrix, int threads = 2, bool omp = true, bool log_time = false);
    vector <vector <int>> matrix;
    bool log_time = true;
    int threads = 2;
    int chunk = 10;
    utils *Utils = new utils;

    int maxmin_guided(vector<vector<int>> matrix, bool log_time, int threads, int chunk);

    int maxmin_static(vector<vector<int>> matrix, bool log_time, int threads, int chunk);

    int calculate_nested(vector<vector<int>> matrix, int threads);

    vector<vector<int>> get_matrix(int dim);

    int calculate_nested2(vector<vector<int>> matrix, int threads);
};

#endif //TASKS_MAXMIN_H
