// common_utils.cpp
// Common general utilities

#include "common_utils.h"
#include <string>
#include <iostream>

using namespace std;

int usage_message(const char *program_name, const string &message) {
/* Usage message function */
	cout << "Usage: " << program_name << message << endl;
	return return_code::err_wrong_input_args;
}

int usage_message(const string &program_name, const string &message) {
/* Usage message function */
	cout << "Usage: " << program_name << message << endl;
	return return_code::err_wrong_input_args;
}
