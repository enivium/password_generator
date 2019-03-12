// pwgen.h
// Functions and variables for the password generator program

#pragma once

#include <vector>

// The number of characters to pull from /dev/urandom on each read
const int rand_vec_length = 20;

// Fill the vector with psuedo-random bytes
int fill_rand_vec(std::vector<char> &rand_vec);
