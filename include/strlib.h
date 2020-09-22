/**
 * @file
 * @brief Contains the user described library functions.
 * */

#pragma once
#ifndef GRAPHS_GRAPHS_H
#define GRAPHS_GRAPHS_H
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

/**
 * @brief Adds two numbers
 * @param a, b the two numbers to be added
 * @return sum of the two input numbers
 * */
int add(int a, int b);

std::vector<std::string> split(const std::string& str);

std::string join(std::vector<std::string> &strs, char delimiter = ' ');

std::ostream &operator<<(std::ostream &os, std::vector<std::string> &strs);


#endif //GRAPHS_GRAPHS_H
