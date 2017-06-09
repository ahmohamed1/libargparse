#ifndef ARGPARSE_UTIL_HPP
#define ARGPARSE_UTIL_HPP
#include <array>

namespace argparse {

    //Splits off the leading dashes of a string, returning the dashes (index 0)
    //and the rest of the string (index 1)
    std::array<std::string,2> split_leading_dashes(std::string str);

    //Converts a string to upper case
    std::string toupper(std::string str);

    //Converts a string to lower case
    std::string tolower(std::string str);

    //Returns true if str represents a named argument starting with
    //'-' or '--' followed by one or more letters
    bool is_argument(std::string str);

    //Returns 'str' interpreted as type T
    // Throws an exception if conversion fails
    template<typename T> 
    T as(std::string str);

    template<typename Container>
    std::string join(Container container, std::string join_str);

    const char* strdup(const char* str);
} //namespace

#include "argparse_util.tpp"

#endif
