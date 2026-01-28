// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LEN1 = 25;
    
    char array_str1[LEN1] = "Hey folks! ";
    char array_str2[] = "What's up, doc?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    strncat(array_str1, array_str2, LEN1);
    std::cout << array_str1 << std::endl;

    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
