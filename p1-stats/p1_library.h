#pragma once

/* p1_library.h
 *
 * Libraries needed for EECS 280 project 1
 * Project UID 5366c7e2b77742d5b2142097e51561a5
 *
 * by Andrew DeOrio <awdeorio@umich.edu>
 * 2015-04-28
 */

#include <vector>
#include <string>
#include <filesystem>

//MODIFIES: v
//EFFECTS: sorts v
void sort(std::vector<double> &v);

//EFFECTS: extracts one column of data from a tab separated values file (.tsv)
//  Prints errors to stdout and exits with non-zero status on errors
std::vector<double> extract_column(std::filesystem::path filename, std::string column_name);

