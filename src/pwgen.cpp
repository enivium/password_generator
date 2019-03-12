// pwgen.cpp
// A program to generate passwords

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

#include "common_utils.h"
#include "pwgen.h"

using namespace std;

int fill_rand_vec(vector<char> &rand_vec, ifstream &rand_file) {
/* Fill the vector with psuedo-random bytes */
	rand_file.read(&rand_vec[0], rand_vec_length); 
	return return_code::success;
}

int main(int argc, char * argv[]) {
	// Notify user if arguments incorrect
	if (argc < num_input_args) {
		return usage_message(argv[input_arg::program_name], 
				     " <length of password>");
	}

	// Retrieve the password length from command line argument
	istringstream pwd_length_strm(argv[input_arg::pwd_length]);
	unsigned int pwd_length;
	if(!(pwd_length_strm >> pwd_length)) {
		cout << "Password length must be a valid number!" << endl;
		return return_code::err_wrong_input_args;
	}
	
	// Open the /dev/urandom file to read random bytes
	ifstream rand_file("/dev/urandom");

	if (!rand_file) {
		cout << "Cannot open /dev/urandom!" << endl;
		return return_code::err_cannot_open_file;
	}

	string password("");
	vector<char> rand_vec(rand_vec_length, 0);
	while (password.length() < pwd_length) {
	 	fill_rand_vec(rand_vec, rand_file);

		// Iterate through the vector of psuedo-random bytes and add 
		// printable chars to the password
		for (auto rand_char : rand_vec) {
			if (isprint(rand_char) && !isspace(rand_char)) {
				password += rand_char;
			}
			
			if (password.length() >= pwd_length) {
				break;
			}
		}
	}
	
	cout << password << endl;
	return return_code::success;
}
