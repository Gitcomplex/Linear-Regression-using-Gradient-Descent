#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <sstream> //stringstream associates a string object with a stream allowing you to read
                    // from the string as if it were a stream (like cin).
#include <string> //data preparation in reading the last character to the string
#include <cstdlib> // random number generation
#include <cstring>//data preparation in reading the last character to the string
#include <ctime> // This function accepts single parameter time_ptr. It is used to set time_t object that contains a time value

#include "Dataset.h"

#include "Weights.h"

Dataset read_csv(const char* filename);
int make_csv(const char* filename, Weights weights);
float mean(float *y, int length);
float sum_of_square(float *y, int length);
float sum_residual(Dataset data, float *y_pred, int current_predictor);
float residual_sum_of_square(float *y_pred, float *y_true, int length);
int calculate_r2(float *y_pred, float *y_true, int length);
float mean_squared_error(float *y_pred, float *y_true, int length);

float intercept_sum(float *y_pred, float *y_true, int length);
float slope_sum(float *x, float *y_pred, float *y_true, int length);

#endif
