Project Description
--------------------
This project is a Linux command-line utility to generate a specified-length password. It
pulls psuedo-random bytes from the /dev/urandom special file and uses only bytes that can represent ASCII
characters. Once it has enough, it prints the characters out to the terminal.

Adding to Path
--------------------
To add the executable to the path, use the following command-line command:

export PATH=$PATH:/absolute/path/to/password_generator

You can now run the program from any directory by typing:

pwgen #

Replace # with the number of characters to generate. To keep the executable on the path between
terminal sessions, add the export command to the end of the bashrc file or equivalent.

Disclaimer
--------------------
This codes does not guarantee secure random sequence generation or secure password generation. It is
provided as-is with no implied liability.

License
--------------------
This code is licensed under the Creative Commons Attribution 4.0 International License.

https://creativecommons.org/licenses/by/4.0/
