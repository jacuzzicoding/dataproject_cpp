//math_functions.h is included in in the main.cpp file
//I will declare the functions from the provided math_functions.cpp file

#ifndef math_functions.h
#define math_functions.h

double arithmeticMean(const std::vector<int>& numbers);

double geometricMean(const std::vector<int>& numbers);

double harmonicMean(const std::vector<int>& numbers);

double standardDeviation(const std::vector<int>& numbers);

double variance(const std::vector<int>& numbers);

double median(std::vector<int> numbers);

int mode(const std::vector<int>& numbers);

int maximumNumber(const std::vector<int>& numbers);

int minimumNumber(const std::vector<int>& numbers);

#endif