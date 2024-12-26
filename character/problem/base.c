#include <stdio.h> //stdio.h is a header file and it contains initilizations for a library 

char* convert_base(char* number, char* from_base, char* to_base);
void help();
int main()
{
    //if program is called with -h or --help option, help() function should be given.
    help();

    
    return 0;
}

char* convert_base(char *number, char *from_base, char *to_base) {
    // definition
    //
    return 0;
}

void help() {
    printf(
        "Base Converter Program\n"
        "======================\n"
        "This program converts a number from one base to another.\n\n"
        "Usage:\n"
        "------\n"
        "compiled_program <number> <from_base> <to_base>\n\n"
        "Arguments:\n"
        "----------\n"
        "<number>     : The number to be converted. Represented as a string to support bases larger than 10\n"
        "               (e.g., hexadecimal values like '1A3F').\n"
        "<from_base>  : The base of the input number. Must be an integer between 2 and 36.\n"
        "<to_base>    : The base to which the number will be converted. Must be an integer between 2 and 36.\n\n"
        "Example:\n"
        "--------\n"
        "$ compiled_program 1010 2 10\n"
        "Output: 10\n\n"
        "$ compiled_program FF 16 2\n"
        "Output: 11111111\n\n"
        );
}
