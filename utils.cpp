//
// Created by Михаил Посевин on 17.10.2021.
//
#include "utils.h"


void utils::write_log_time(long total_time, int threads) {
    ofstream execution_time_log;
    execution_time_log.open("execution_time_log2.csv", fstream::app);
    execution_time_log << 1 << ", " << total_time << ", " << threads << endl;
    execution_time_log.close();
}

void utils::write_to_file(string str) {
    ofstream file;
    file.open("notes.txt");
    file << str << endl;
    file.close();
}

vector<vector<int>> utils::generate_triangular_matrix(int triangular_matrix_dim = 10000) {
    vector<vector<int>> triangular_matrix = {};
    for (int i = 0; i < triangular_matrix_dim; i++) {
        vector<int> new_row = {};
        for (int j = 0; j <= i; j++) {
            new_row.push_back(rand() % 100);
        }
        for (int j = i + 1; j < triangular_matrix_dim; j++) {
            new_row.push_back(0);
        }
        triangular_matrix.push_back(new_row);
    }
    return triangular_matrix;
}

void utils::print_matrix(vector<vector<int>> matrix) {
    cout << "[\n";
    for (int i = 0; i < matrix.size(); i++) {
        cout << "[";
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << "], \n";
    }
    cout << "]\n";
}

string utils::print_matrix2(vector<vector<int>> matrix) {
    string res = "";
    res.append("[\n");
    for (int i = 0; i < matrix.size(); i++) {
        res.append("[");
        for (int j = 0; j < matrix[i].size(); j++) {
            res.append(to_string(matrix[i][j]));
            res.append(", ");
        }
        res.append("], \n");
    }
    res.append("]\n");
    return res;
}

vector<vector<int>> utils::get_matrix(int dim) {
    vector<vector<int>> matrix = {};
    vector<int> new_row;
    int i;
    int j;
    for (i = 0; i < dim; i++) {
        srand(static_cast<unsigned int>(time(0)));
        new_row = {};
        for (j = 0; j < dim; j++) {
            new_row.push_back(rand() % 1000000 - 500000);
        }
        matrix.push_back(new_row);
    }
    return matrix;
}

int * utils::get_array(int len) {
    int arr[len];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < len; i++) {
        arr[i] = rand() % 1000000 - 500000;
    }
    return arr;
}

vector<int> utils::get_vector(int len) {
    vector<int> vector = {};
    srand(static_cast<unsigned int>(time(0)));
    vector.reserve(len);
for (int i = 0; i < len; i++) {
        vector.push_back(rand() % 1000000 - 500000);
    }
    return vector;
}