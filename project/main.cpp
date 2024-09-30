#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <unordered_map>
#include "math_functions.h"

using namespace std;

//this will be my main.cpp file, using the functions defined in math_functions.h

int main() {
    //first i will greet the user to the program
    cout << "Welcome to the Math Functions Program!" << endl;
    //now I will have the program read the data.txt file to get the numbers to create the vector
    ifstream file ("data.txt"); //this will open the file if it exists
    //error message if the file does not exist:
    if (!file) { //if there is no file
        cerr << "There is no data.txt file to be read." << endl;
        return 1;
        }
    //now, assuming the file does actually exist we will read the numbers from the file 
    vector<int> numbers;
    int number;
    while (file >> number) { //so while the file is reading the numbers one by one
        numbers.push_back(number); //it will add the numbers to the vector, using the push_back function which adds the number to the end of the vector (tail
    }
    //now that we have the numbers, we can use the functions from math_functions.h to calculate the results



}