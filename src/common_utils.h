// common_utils.h
// Common general utilities

#pragma once

#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

#include <string>
#include <vector>

//Number of input arguments accepted by program
const int num_input_args = 2;

//Enumeration for array indexes of values passed to program and accepted number of arguments
enum input_arg {
	program_name = 0,
	pwd_length = 1
};

//Values the program can return
enum return_code {
	//Standard
	success = 0,
	err_wrong_input_args = 1,
	err_cannot_open_file = 2,
	//Program-specific
	err_cannot_get_rand_bytes = 3
};

/* Usage message function */
int usage_message(const char *program_name, const std::string &message);
int usage_message(const std::string &program_name, const std::string &message);

#endif
