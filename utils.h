//
// Created by Михаил Посевин on 17.10.2021.
//

#ifndef TASKS_UTILS_H
#define TASKS_UTILS_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class utils {
public:
    void write_log_time(long int total_time, int threads);
    vector<vector<int>> generate_triangular_matrix(int triangular_matrix_dim);

    void print_matrix(vector<vector<int>> matrix);

    vector<vector<int>> get_matrix(int dim);

    void write_to_file(string str);

    string print_matrix2(vector<vector<int>> matrix);

    int * get_array(int len);

    vector<int> get_vector(int len);
};

#endif //TASKS_UTILS_H
