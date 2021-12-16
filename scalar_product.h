//
// Created by Михаил Посевин on 02.12.2021.
//

#ifndef TASKS_SCALAR_PRODUCT_H
#define TASKS_SCALAR_PRODUCT_H

#include <vector>
#include <iostream>
#include <fstream>
#include "omp.h"

using namespace std;


class ScalarProduct {
public:
    int calculate_simple(vector<int> array1, vector<int> array2);

    static void print_data(vector<vector<vector<int>>> vectors, vector<int> total);

    static void print_vector(vector<int> v1);

    vector<vector<vector<int>>> get_vectors(int length, int v_num);

    int calculate(const int *array1, const int *array2, int array_length, int threads);

    int calculate2(vector<int> array1, vector<int> array2, int threads);

    int calculate_lock(vector<int> array1, vector<int> array2, int threads);

    int calculate_critical(vector<int> array1, vector<int> array2, int threads);

    int calculate_atomic(vector<int> array1, vector<int> array2, int threads);

    vector<int> calculate_sections(int length, int v_num, int threads);
};


#endif //TASKS_SCALAR_PRODUCT_H
