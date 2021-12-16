#include <iostream>
#include <vector>
#include "maxmin.h"
#include "max.h"
#include "scalar_product.h"
#include "integral.h"
#define PI 3.14159265

using namespace std;


int main() {
    auto *max_class = new Max(false, true, false);
    auto *scalar_product_class = new ScalarProduct;
    auto *integral_class = new Integral;
    auto *maxmin_class = new MaxMin;


    cout << "\nTASK №1:\n";
    int len = 2000000;
    int max_el = max_class->get_max(maxmin_class->Utils->get_array(len), len, 4);


    cout << "\nTASK №2:\n";
    len = 2000000;
    int product = scalar_product_class->calculate(maxmin_class->Utils->get_array(len), maxmin_class->Utils->get_array(len), len, 4);


    cout << "\nTASK №3:\n";
    int dots_number = 9000000;
    double segment_length = PI;
    double segment_end = PI;
    // consts -> segment_length, segment_end, dots_number
    double partition = segment_length / dots_number;
    vector<double> y_values = integral_class->get_y_values(segment_length, segment_end, dots_number, partition);
    double integral_value = integral_class->calculate(y_values, dots_number, partition, 0);


    cout << "\nTASK №4:\n";
    int matrix_maxmin = maxmin_class->maxmin(maxmin_class->Utils->get_matrix(2000), 4);


    cout << "\nTASK №5:\n";
    int triangular_matrix_dim = 2000;
    int threads = 4;
    int chunk = 100;
    vector<vector<int>> triangular_matrix = maxmin_class->Utils->generate_triangular_matrix(triangular_matrix_dim);
    matrix_maxmin = maxmin_class->maxmin(triangular_matrix, threads);
    cout << "\ndynamic:\n";
    int triangular_matrix_maxmin1 = maxmin_class->maxmin_dynamic(triangular_matrix, false, threads, chunk);
    cout << "\nguided:\n";
    int triangular_matrix_maxmin2 = maxmin_class->maxmin_guided(triangular_matrix, false, threads, chunk);
    cout << "\nstatic:\n";
    int triangular_matrix_maxmin3 = maxmin_class->maxmin_static(triangular_matrix, false, threads, chunk);


    cout << "\nTASK №6:\n";
    len = 2000000;
    threads = 4;
    auto arr_2_1 = maxmin_class->Utils->get_vector(len);
    auto arr_2_2 = maxmin_class->Utils->get_vector(len);
    product = scalar_product_class->calculate2(arr_2_1, arr_2_2, threads);
    product = scalar_product_class->calculate_atomic(arr_2_1, arr_2_2, threads);
    product = scalar_product_class->calculate_critical(arr_2_1, arr_2_2, threads);
    product = scalar_product_class->calculate_lock(arr_2_1, arr_2_2, threads);


    cout << "\nTASK №7:\n";
    int vector_size = 1000;
    int vector_pairs_number = 1000;
    auto products = scalar_product_class->calculate_sections(vector_size, vector_pairs_number, 1);

    cout << "\nTASK №9-10:\n";
    auto matrix = maxmin_class->Utils->get_matrix(2000);
    threads = 4;
    maxmin_class->maxmin(matrix, threads);
    maxmin_class->calculate_nested(matrix, threads);
    maxmin_class->calculate_nested2(matrix, threads);

    return(0);
}
